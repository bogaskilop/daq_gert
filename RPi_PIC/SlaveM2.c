
/* Parts of this code were modified from
 *  http://www.d.umn.edu/~cprince/PubRes/Hardware/SPI/
 * examples
 *
 * Fully interrupt drived SPI slave ADC for RPi via the daq_gert linux module
 * Port E is the main led diag port
 * SPI 1 has been config'd as the slave with SPI 2 as Master. The I/O and clock pins
 * have been interconnected in the standard way for a PIC18F8722 chip
 */

#pragma	config OSC = HSPLL
#pragma config WDT = OFF
#pragma config BOREN = OFF
#pragma config STVREN = ON
#pragma config LVP=OFF

#include "xlcd.h"
#include <p18cxxx.h>
#include <spi.h>
#include <adc.h>
#include <delays.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <GenericTypeDefs.h>


#define SPI_SS_PIN	 PORTAbits.RA5
#define SPI_SS		LATAbits.LATA5

#define CMD_OK		0b11111110
#define CMD_ALIVE	0b10101010
#define CMD_FOO		0x00
#define CMD_ADC_DATAL	0x01
#define CMD_ADC_DATAH	0x02
#define CMD_DUMMY	0b11111111

/* LCD defines */
#define LCD_L           4                       // lines
#define LCD_W           20			// chars per line
#define LCD_STR         22                 // char string for LCD messages
#define LCDW_SIZE       21              // add term char
#define MESG_W          250			// message string buffer
#define	LL1		0x00                    // LCD line addresses
#define	LL2		0x40
#define LL3		0x14
#define	LL4		0x54
#define	VC_MAX		3
#define VS_SLOTS	12                      // storage array size
#define	VC0		0			// LCD Virtual Screens
#define	VC1		4
#define	VC2		8
#define VS0		0			// Virtual screen select
#define VS1		1
#define VS2		2
#define	DS0		0			// LCD line index
#define	DS1		1
#define	DS2		2
#define	DS3		3
#define	DS4		4
#define	DS5		5
/* DIO defines */
#define LOW		(unsigned char)0        // digital output state levels, sink
#define	HIGH            (unsigned char)1        // digital output state levels, source
#define	ON		LOW       		//
#define OFF		HIGH			//
#define	S_ON            LOW       		// low select/on for chip/led
#define S_OFF           HIGH			// high deselect/off chip/led
#define	R_ON            HIGH       		// control relay states, relay is on when output gate is high, uln2803,omron relays need the CPU at 5.5vdc to drive
#define R_OFF           LOW			// control relay states
#define R_ALL_OFF       0x00
#define R_ALL_ON	0xff
#define NO		LOW
#define YES		HIGH

#ifdef INTTYPES
#include <stdint.h>
#else
#define INTTYPES
/*unsigned types*/
typedef unsigned char uint8_t;
typedef unsigned int uint16_t;
typedef unsigned long uint32_t;
typedef unsigned long long uint64_t;
/*signed types*/
typedef signed char int8_t;
typedef signed int int16_t;
typedef signed long int32_t;
typedef signed long long int64_t;
#endif

struct lcdb {
    int8_t b[LCDW_SIZE];
};

const rom char *build_date = __DATE__, *build_time = __TIME__;
volatile uint8_t data_in1, data_in2, adc_buffer_ptr = 0,
	adc_channel = 0, dsi = 0, SPI_DATA = FALSE, ADC_DATA = FALSE,
	REMOTE_LINK = FALSE;
volatile uint32_t adc_count = 0, adc_error_count = 0;
volatile uint16_t adc_buffer[64] = {0};
#pragma udata gpr13
far int8_t bootstr2[MESG_W + 1];
uint8_t lcd18 = 200;
#pragma udata gpr2
struct lcdb ds[VS_SLOTS];
#pragma udata gpr9

void InterruptHandlerHigh(void);

//High priority interrupt vector
#pragma code InterruptVectorHigh = 0x08

void InterruptVectorHigh(void)
{
    _asm
    goto InterruptHandlerHigh //jump to interrupt routine
	    _endasm
}

//----------------------------------------------------------------------------
// High priority interrupt routine

#pragma code
#pragma interrupt InterruptHandlerHigh

void InterruptHandlerHigh(void)
{

    if (PIR1bits.ADIF) { // ADC conversion complete flag
	PIR1bits.ADIF = LOW;
	adc_count++; // just keep count
	adc_buffer[adc_buffer_ptr] = ADRESL + (ADRESH << 8);
	LATEbits.LATE0 = !LATEbits.LATE0;
	ADC_DATA = TRUE;
    }

    if (PIR1bits.SSP1IF) { // SPI port #1 SLAVE receiver
	PIR1bits.SSP1IF = LOW;
	data_in1 = SSP1BUF;
	LATEbits.LATE1 = !LATEbits.LATE1;

	if (data_in1 == CMD_ALIVE) { // Found a Master command
	    SSP1BUF = CMD_ALIVE; // Tell master  we are alive
	    LATEbits.LATE6 = !LATEbits.LATE6;
	    ADC_DATA=FALSE;
	    ADCON0bits.GO = 1; // start a conversion
	}
	if (data_in1 == CMD_DUMMY) {
	    SSP1BUF = CMD_DUMMY; // Tell master  we are here
	}
	if (data_in1 == CMD_ADC_DATAL) {
	    SSP1BUF = ADRESL;
	}
	if (data_in1 == CMD_ADC_DATAH) {
	    SSP1BUF = ADRESH;
	}
	SPI_DATA = TRUE;
    }

    if (PIR3bits.SSP2IF) { // SPI port #1 MASTER receiver
	PIR3bits.SSP2IF = LOW;
	data_in2 = SSP2BUF;
	LATEbits.LATE2 = !LATEbits.LATE2;

	if (data_in2 == CMD_DUMMY) { // Crack the whip
	    LATEbits.LATE3 = !LATEbits.LATE3;
	}
	if (data_in2 == CMD_ALIVE) {
	    LATEbits.LATE4 = !LATEbits.LATE4;
	}
	if (data_in2 == CMD_OK) {
	    LATEbits.LATE5 = !LATEbits.LATE5;

	}
    }

}
#pragma code

void wdtdelay(unsigned long delay)
{
    static uint32_t dcount;
    for (dcount = 0; dcount <= delay; dcount++) { // delay a bit
	Nop();
	ClrWdt(); // reset the WDT timer
    };
}

void DelayFor18TCY(void)
{
    static uint8_t n;
    _asm nop _endasm // asm code to disable compiler optimizations
    for (n = 0; n < lcd18; n++) Nop(); // works at 200 (slow white) or 24 (fast blue)
}

//------------------------------------------

void DelayPORXLCD(void) // works with 15
{
    Delay10KTCYx(15); // Delay of 15ms
    return;
}

//------------------------------------------

void DelayXLCD(void) // works with 5
{
    Delay10KTCYx(5); // Delay of 5ms
    return;
}

void LCD_VC_puts(unsigned char console, unsigned char line, unsigned char COPY) // VCx,DSx, [TRUE..FALSE} copy data from bootstr2 string
{ // into the LCD display buffer
    static uint8_t ib = 0;

    if (COPY) {
	ib = console + line; // set to string index to store data in LCD message array ds[x].b
	strncpypgm2ram(ds[ib].b, "                        ", LCD_W); // write 20 space chars
	strncpy(ds[ib].b, bootstr2, LCD_W); // move data from static buffer in lcd message array
	ds[ib].b[LCD_W] = 0; // make sure we have a string terminator
    }
    switch (line) {
    case DS0:
	SetDDRamAddr(LL1); // move to  line
	break;
    case DS1:
	SetDDRamAddr(LL2); // move to  line
	break;
    case DS2:
	SetDDRamAddr(LL3); // move to  line
	break;
    case DS3:
	SetDDRamAddr(LL4); // move to  line
	break;
    default:
	SetDDRamAddr(LL1); // move to  line 1 of out of range
	break;
    }
    ib = dsi + line; // set to string index to display on LCD, dsi is the current VC being displayed

    while (BusyXLCD());
    putsXLCD(ds[ib].b);
    while (BusyXLCD());
}

void init_lcd(void)
{
    lcd18 = 200;
    wdtdelay(10000); // delay for power related LCD setup glitch
    if (BusyXLCD()) {
	OpenXLCD(FOUR_BIT & LINES_5X7);
	while (BusyXLCD());
	wdtdelay(10000); // delay for power related LCD setup glitch
	OpenXLCD(FOUR_BIT & LINES_5X7);
	while (BusyXLCD());
	WriteCmdXLCD(0xc); // blink, cursor off
	while (BusyXLCD());
	WriteCmdXLCD(0x1); // clear screen
	wdtdelay(10000);
	lcd18 = 24;
    }
}

void clear_spi_data_flag(void)
{
    SPI_DATA = FALSE;
}

uint8_t spi_data_recd(void)
{
    uint32_t delay = 0;
    while (!SPI_DATA) {
	if (delay++ > 50000) return FALSE;
    }
    return TRUE;
}

void main(void) /* SPI Master/Slave loopback */
{
    int16_t i, j, k = 0;
    uint8_t junk;
    TRISB = 0xff; // external interrupts for later
    LATE = 0xff;
    LATJ = 0xff;
    TRISE = 0;
    TRISF = 0;
    TRISJ = 0;
    TRISH = LOW; // mpuled and LCD
    LATH = 0xff;

    /* ADC channels setup */
    ADCON1 = 0x03; // adc [0..11] enable
    TRISAbits.TRISA0 = HIGH; // an0
    TRISAbits.TRISA1 = HIGH; // an1
    TRISAbits.TRISA2 = HIGH; // an2
    TRISAbits.TRISA3 = HIGH; // an3
    TRISAbits.TRISA5 = HIGH; // an4
    TRISFbits.TRISF0 = HIGH; // an5
    TRISFbits.TRISF1 = HIGH; // an6
    TRISFbits.TRISF2 = HIGH; // an7
    TRISFbits.TRISF3 = HIGH; // an8
    TRISFbits.TRISF4 = HIGH; // an9
    TRISFbits.TRISF5 = HIGH; // an10
    TRISFbits.TRISF6 = HIGH; // an11
    OpenADC(ADC_FOSC_RC & ADC_RIGHT_JUST & ADC_20_TAD, ADC_CH0 & ADC_REF_VDD_VSS & ADC_INT_ON, ADC_12ANA); // open ADC channel for current and voltage readings
    PIE1bits.ADIE = HIGH; // the ADC interrupt enable bit
    IPR1bits.ADIP = HIGH; // ADC use high pri

    SSPBUF = 0x55;
    OpenSPI1(SLV_SSOFF, MODE_01, SMPMID); // Must be SMPMID in slave mode, Port C 4,5,3
    OpenSPI2(SPI_FOSC_64, MODE_01, SMPEND); // Must be SMPMID in slave mode, Port D 4,5,6
    SSP1BUF = CMD_DUMMY;
    SSP2BUF = CMD_DUMMY;

    PIR1bits.SSP1IF = 0;
    PIE1bits.SSP1IE = 1;
    PIR3bits.SSP2IF = 0;
    PIE3bits.SSP2IE = 1;
    INTCONbits.PEIE = 1;
    INTCONbits.GIE = 1;

    SSP2BUF = CMD_DUMMY;
    SSP2BUF = CMD_DUMMY;

    init_lcd();
    strncpypgm2ram(bootstr2, build_time, LCD_W);
    LCD_VC_puts(VC0, DS0, YES);
    strncpypgm2ram(bootstr2, build_date, LCD_W);
    LCD_VC_puts(VC0, DS1, YES);

    for (i = 0; i < 1000; i++) {
	for (j = 0; j < 100; j++) {
	}
    }
    SSP1CON1bits.WCOL = SSP2CON1bits.WCOL = SSP1CON1bits.SSPOV = SSP2CON1bits.SSPOV = 0;

    while (1) {
	LATEbits.LATE7 = !LATEbits.LATE7;

	clear_spi_data_flag();
	SSP2BUF = CMD_ALIVE; // Master sends data
	if (spi_data_recd() && (data_in2==CMD_DUMMY)) {
	    clear_spi_data_flag();
	    SSP2BUF = CMD_DUMMY; // Master sends DUMMY data;
	    if (spi_data_recd() && (data_in2==CMD_ALIVE)) {
		REMOTE_LINK = TRUE;
	    } else {
		REMOTE_LINK = FALSE;
		SSP2BUF = CMD_DUMMY; // Master sends DUMMY data;
	    }
	} else {
	    REMOTE_LINK = FALSE;
	    SSP2BUF = CMD_DUMMY; // Master sends DUMMY data;
	}



	if (SSP1CON1bits.WCOL || SSP2CON1bits.WCOL || SSP1CON1bits.SSPOV || SSP2CON1bits.SSPOV) { // check for overruns/collisions
	    LATHbits.LATH0 = !LATHbits.LATH0;
	    SSP1CON1bits.WCOL = SSP2CON1bits.WCOL = SSP1CON1bits.SSPOV = SSP2CON1bits.SSPOV = 0;
	    adc_error_count = adc_count - adc_error_count;
	}

	/* Delay, so we can adjust SPI pace */
	/* the max conversion rate is about 50us per 10bit ADC read via the SPI */
	/* with 40mhz FOSC and SPI_FOSC_16 */
	for (i = 0; i < 5; i++) {
	    for (j = 0; j < 1; j++) {
	    }
	}
	if ((((k++) % 5000) == 0) || !REMOTE_LINK) {
	    if (REMOTE_LINK) {
		sprintf(bootstr2,
			"The SPI Link is UP         "
			);
		LCD_VC_puts(VC0, DS0, YES);
	    } else {
		sprintf(bootstr2,
			"The SPI Link is DOWN         "
			);
		LCD_VC_puts(VC0, DS0, YES);
	    }
	    	    if (ADC_DATA) {
		sprintf(bootstr2,
			"The ADC is Done         "
			);
		LCD_VC_puts(VC0, DS1, YES);
	    } else {
		sprintf(bootstr2,
			"The ADC is Working             "
			);
		LCD_VC_puts(VC0, DS1, YES);
	    }
	    sprintf(bootstr2,
		    "Err %lu, # %lu      ",
		    adc_error_count, adc_count);
	    LCD_VC_puts(VC0, DS2, YES);
	    sprintf(bootstr2,
		    "Data %u, Buffer %u      ",
		    adc_buffer[adc_buffer_ptr], (int) adc_buffer_ptr);
	    LCD_VC_puts(VC0, DS3, YES);
	}
    };

}
