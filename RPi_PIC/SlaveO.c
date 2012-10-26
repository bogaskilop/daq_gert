
/* Parts of this code were modified from
 *  http://www.d.umn.edu/~cprince/PubRes/Hardware/SPI/
 * examples
 *
 * Fully interrupt drived SPI slave ADC for RPi via the daq_gert linux module
 * 8722
 * Port E is the main led diag port
 * PORT H is the LCD port
 * 25k22
 * Pins C0,C1 are the diag LED pins.
 * SPI 2 has been config'd as the slave with chip select.
 * The I/O and clock pins
 * have been interconnected in the standard way for a PIC18F8722 chip
 *
 * Version	0.06 P25K22 Set PIC speed to 64mhz and use have ADC use FOSC_64,12_TAD
 *		     P8722 have ADC usr FOSC_32,12_TAD
 *		0.05 Fixed the P25K22 version to work correctly.
 *		0.04 The testing hardware is mainly a pic18f8722 with a
 *		LCD display and PORTE bit leds.
 *		The target hardware for field use will be the pic18f25k22
 *		due to its 28 pin dip format, BUT is not currenetly being
 *		tested.
 *		define the CPU type below.
 *
 *		The WatchDog and timer0 are used to check link status
 *		and to reset the chip if hung or confused.
 *
 * nsaspook@nsaspook.com    Oct 2012
 */

#define P25K22
//#define P8722

#ifdef P8722
#include "xlcd.h"
#include <p18f8722.h>
#pragma	config OSC = HSPLL
#pragma config WDT = ON, WDTPS = 1024
#pragma config BOREN = OFF
#pragma config STVREN = ON
#pragma config LVP=OFF
#endif

#ifdef P25K22
#include <p18f25k22.h>
#pragma	config	FOSC = INTIO67
#pragma config	PLLCFG=ON
#pragma config	WDTEN = ON, WDTPS = 1024
#pragma config	CCP2MX = PORTC1, PBADEN = OFF, T3CMX = PORTC0
#pragma config	BOREN = OFF
#pragma config	STVREN = ON
#pragma config	LVP=OFF
#endif

#include <spi.h>
#include <timers.h>
#include <adc.h>
#include <delays.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <GenericTypeDefs.h>

/*
 * bit 7 high for commands sent from the MASTER
 * bit 6 0 send lower or 1 send upper byte ADC result first
 * bits 3..0 port address
 *
 * bit 7 low  for config data sent in CMD_DUMMY per uC type
 * bits 6 config bit code always 1
 * bit	5 0=ADC ref VDD, 1=ADC rec FVR=2.048
 * bit  4 0=10bit adc, 1=12bit adc
 * bits 3..0 number of ADC channels
 * 
 */

#define	TIMEROFFSET	26474           // timer0 16bit counter value for 1 second to overflow
#define SLAVE_ACTIVE	10		// Activity counter level

#define CMD_ADC_GO	0b10000000
#define CMD_ADC_GO_H	0b11000000
#define CMD_ADC_DONE	0b11110000
#define CMD_ADC_DATA	0b10010000

#define CMD_DUMMY_CFG	0b01000000
#ifdef P8722
#define CMD_DUMMY	0b01001100	/* 12 channels VDD */
#define NUM_AI_CHAN	12
#endif
#ifdef P25K22
#define CMD_DUMMY	0b01101110	/* 14 channels 2.048 but only 13 are ADC */
#define NUM_AI_CHAN     14
#endif

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

#ifdef P8722
#define DLED0		LATEbits.LATE0
#define DLED1		LATEbits.LATE1
#define DLED2		LATEbits.LATE2
#define DLED3		LATEbits.LATE3
#define DLED4		LATEbits.LATE4
#define DLED5		LATEbits.LATE5
#define DLED6		LATEbits.LATE6
#define DLED7		LATEbits.LATE7
#endif
#ifdef P25K22
#define DLED0		LATCbits.LATC0
#define DLED1		LATCbits.LATC1
#define DLED2		LATCbits.LATC1
#define DLED3		LATCbits.LATC1
#define DLED4		LATCbits.LATC1
#define DLED5		LATCbits.LATC1
#define DLED6		LATCbits.LATC1
#define DLED7		LATCbits.LATC1
#endif

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

const rom int8_t *build_date = __DATE__, *build_time = __TIME__;
volatile uint8_t data_in2, adc_buffer_ptr = 0,
	adc_channel = 0, SPI_DATA = FALSE, ADC_DATA = FALSE,
	REMOTE_LINK = FALSE, REMOTE_DATA_DONE = FALSE, LOW_BITS = FALSE;
volatile uint8_t dsi = 0; // LCD virtual console number
volatile uint32_t adc_count = 0, adc_error_count = 0,
	slave_int_count = 0, last_slave_int_count = 0;
volatile uint16_t adc_buffer[64] = {0}, adc_data_in = 0;
#pragma udata gpr13
far int8_t bootstr2[MESG_W + 1];
uint8_t lcd18 = 200;
#pragma udata gpr2
far struct lcdb ds[VS_SLOTS];
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
    static uint8_t channel = 0, link, upper, command;
    static union Timers timer;

    if (INTCONbits.TMR0IF) { // check timer0 irq 1 second timer int handler
	INTCONbits.TMR0IF = LOW; //clear interrupt flag
	//check for TMR0 overflow

	timer.lt = TIMEROFFSET; // Copy timer value into union
	TMR0H = timer.bt[HIGH]; // Write high byte to Timer0
	TMR0L = timer.bt[LOW]; // Write low byte to Timer0
	/* if we are just idle don't reset the PIC */
	if ((slave_int_count - last_slave_int_count) < SLAVE_ACTIVE) {
	    ClrWdt(); // reset the WDT timer
	    DLED1 = HIGH;
	    DLED2 = HIGH;
	    DLED3 = HIGH;
	    DLED4 = HIGH;
	    DLED5 = HIGH;
	    DLED6 = HIGH;
	    DLED7 = HIGH;
	}
	link = FALSE;
	REMOTE_LINK = FALSE;
	DLED0 = LOW;
    }

    if (PIR1bits.ADIF) { // ADC conversion complete flag
	PIR1bits.ADIF = LOW;
	adc_count++; // just keep count
	adc_buffer[channel] = ADRES;
	if (upper) {
	    SSP2BUF = (uint8_t) (adc_buffer[channel] >> 8); // stuff with upper 8 bits
	} else {
	    SSP2BUF = (uint8_t) adc_buffer[channel]; // stuff with lower 8 bits
	}
	ADC_DATA = TRUE;
	DLED1 = !DLED1;
    }

    /* we only get this when the master  wants data, the slave never generates one */
    if (PIR3bits.SSP2IF) { // SPI port #2 SLAVE receiver
	PIR3bits.SSP2IF = LOW;
	slave_int_count++;
	data_in2 = SSP2BUF;
	command = data_in2 & 0xf0;
	if ((command == CMD_ADC_GO) || (command == CMD_ADC_GO_H)) { // Found a GO command
	    if ((data_in2 & 0b01000000) > 0) {
		upper = TRUE;
		DLED7 = LOW;
	    } else {
		upper = FALSE;
		DLED7 = HIGH;
	    }
	    channel = data_in2 & 0x0f;
#ifdef P25K22
	    if (channel > 4) channel += 7; // skip missing channels
	    if (channel > 19) channel = 0; // invalid to set to 0
#endif
#ifdef P8722
	    if (channel > 11) channel = 0; // invalid so set to 0
#endif
	    if (!ADCON0bits.GO) {
		ADCON0 = ((channel << 2) & 0b00111100) | (ADCON0 & 0b11000011);
		ADC_DATA = FALSE;
		ADCON0bits.GO = HIGH; // start a conversion
		DLED2 = !DLED2;
	    } else {
		ADCON0bits.GO = LOW; // stop a conversion
		SSP2BUF = CMD_DUMMY; // Tell master  we are here
		ADC_DATA = FALSE;
		DLED3 = !DLED3;
	    }
	}
	if (data_in2 == CMD_DUMMY_CFG) {
	    SSP2BUF = CMD_DUMMY; // Tell master  we are here
	    DLED4 = !DLED4;
	}
	if (data_in2 == CMD_ADC_DATA) {
	    if (!ADCON0bits.GO) {
		if (upper) {
		    SSP2BUF = (uint8_t) adc_buffer[channel]; // stuff with lower 8 bits
		} else {
		    SSP2BUF = (uint8_t) (adc_buffer[channel] >> 8); // stuff with upper 8 bits
		}
		DLED5 = !DLED5;
		last_slave_int_count = slave_int_count;
		ClrWdt(); // reset the WDT timer
		REMOTE_LINK = TRUE;
		link = TRUE;
		DLED0 = HIGH;
		/* reset link data timer if we are talking */
		timer.lt = TIMEROFFSET; // Copy timer value into union
		TMR0H = timer.bt[HIGH]; // Write high byte to Timer0
		TMR0L = timer.bt[LOW]; // Write low byte to Timer0
		INTCONbits.TMR0IF = LOW; //clear possible interrupt flag
	    } else {
		DLED6 = !DLED6;
		SSP2BUF = CMD_DUMMY;
	    }
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

#ifdef P8722

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
    ib = dsi + line; // set to string index to display on LCD, dsi GLOBAL is the current VC being displayed

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
#endif

void config_pic(void)
{
#ifdef P8722
    TRISBbits.TRISB4 = 1; // QEI encoder inputs
    TRISBbits.TRISB5 = 1;
    TRISBbits.TRISB6 = 1;
    TRISBbits.TRISB7 = 1;

    TRISE = 0; // all outputs dor DIAG leds
    TRISF = 0;
    TRISJ = 0;
    TRISH = LOW; // mpuled and LCD
    LATE = 0xff; // all LEDS off
    LATJ = 0xff;
    LATH = 0xff;

    TRISDbits.TRISD6 = 1; // SSP2 pins clk in SLAVE
    TRISDbits.TRISD5 = 1; // SDI
    TRISDbits.TRISD4 = 0; // SDO
    TRISDbits.TRISD7 = 1; // SS2

    ADCON1 = 0x03; // adc [0..11] enable
#endif
#ifdef P25K22
    OSCCON = 0x70; // internal osc 16mhz, CONFIG OPTION 4XPLL for 64MHZ
    OSCTUNE = 0xC0; // 4x pll
    TRISC = 0b11111100; // [0..1] outputs for DIAG leds [2..7] for analog
    LATC = 0x00; // all LEDS on
    TRISAbits.TRISA6 = 0; // CPU clock out

    TRISBbits.TRISB1 = 1; // SSP2 pins clk in SLAVE
    TRISBbits.TRISB2 = 1; // SDI
    TRISBbits.TRISB3 = 0; // SDO
    TRISBbits.TRISB0 = 1; // SS2

    /* ADC channels setup */
    TRISAbits.TRISA0 = HIGH; // an0
    TRISAbits.TRISA1 = HIGH; // an1
    TRISAbits.TRISA2 = HIGH; // an2
    TRISAbits.TRISA3 = HIGH; // an3
    TRISAbits.TRISA5 = HIGH; // an4
    TRISBbits.TRISB4 = HIGH; // an11
    TRISBbits.TRISB0 = HIGH; // an12 SS2, don't use for analog
    TRISBbits.TRISB5 = HIGH; // an13
    TRISCbits.TRISC2 = HIGH; // an14
    TRISCbits.TRISC3 = HIGH; // an15
    TRISCbits.TRISC4 = HIGH; // an16
    TRISCbits.TRISC5 = HIGH; // an17
    TRISCbits.TRISC6 = HIGH; // an17
    TRISCbits.TRISC7 = HIGH; // an18

    TRISBbits.TRISB4 = 1; // QEI encoder inputs
    TRISBbits.TRISB5 = 1;
    TRISBbits.TRISB6 = 1;
    TRISBbits.TRISB7 = 1;

    ANSELA = 0b00101111; // analog bit enables
    ANSELB = 0b00110000; // analog bit enables
    ANSELC = 0b11111100; // analog bit enables
    VREFCON0 = 0b11100000; // ADC voltage ref 2.048 volts
    OpenADC(ADC_FOSC_64 & ADC_RIGHT_JUST & ADC_12_TAD, ADC_CH0 & ADC_INT_ON, ADC_REF_FVR_BUF & ADC_REF_VDD_VSS); // open ADC channel
#endif

#ifdef P8722
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
    OpenADC(ADC_FOSC_32 & ADC_RIGHT_JUST & ADC_12_TAD, ADC_CH0 & ADC_REF_VDD_VSS & ADC_INT_ON, ADC_12ANA); // open ADC channel
#endif

    PIE1bits.ADIE = HIGH; // the ADC interrupt enable bit
    IPR1bits.ADIP = HIGH; // ADC use high pri

    OpenSPI2(SLV_SSON, MODE_11, SMPMID); // Must be SMPMID in slave mode
    SSP2BUF = CMD_DUMMY_CFG;

    /* System activity timer, can reset the processor */
    OpenTimer0(TIMER_INT_ON & T0_16BIT & T0_SOURCE_INT & T0_PS_1_256);
    WriteTimer0(TIMEROFFSET); //      start timer0 at 1 second ticks

    /* clear SPI module possible flag and enable interrupts*/
    PIR3bits.SSP2IF = LOW;
    PIE3bits.SSP2IE = HIGH;

#ifdef P8722
    /* Enable global interrupts */
    INTCONbits.PEIE = HIGH;
    INTCONbits.GIE = HIGH;
#endif
#ifdef P25K22
    /* Enable interrupt priority */
    RCONbits.IPEN = 1;
    /* Enable all high priority interrupts */
    INTCONbits.GIEH = 1;
#endif

    /* clear any SSP error bits */
    SSP2CON1bits.WCOL = SSP2CON1bits.SSPOV = LOW;

}

void main(void) /* SPI Master/Slave loopback */
{
    int16_t i, j, k = 0, num_ai_chan = 0;
    uint8_t stuff;

    config_pic(); // setup the slave for work

#ifdef P8722
    init_lcd();
    strncpypgm2ram(bootstr2, build_time, LCD_W);
    LCD_VC_puts(VC0, DS0, YES);
    /* show build data on LCD */
    for (i = 0; i < 1000; i++) {
	for (j = 0; j < 500; j++) {
	    ClrWdt(); // reset the WDT timer
	}
    }
    sprintf(bootstr2,
	    "nsaspook                    "
	    );
    LCD_VC_puts(VC0, DS0, YES);
    strncpypgm2ram(bootstr2, build_date, LCD_W);
    LCD_VC_puts(VC0, DS1, YES);

    /* show build data on LCD */
    for (i = 0; i < 1000; i++) {
	for (j = 0; j < 500; j++) {
	    ClrWdt(); // reset the WDT timer
	}
    }
#endif

    while (1) { // just loop and output results on DIAG LCD

	if (SSP2CON1bits.WCOL || SSP2CON1bits.SSPOV) { // check for overruns/collisions
#ifdef P8722
	    LATHbits.LATH0 = !LATHbits.LATH0;
#endif
	    SSP2CON1bits.WCOL = SSP2CON1bits.SSPOV = 0;
	    adc_error_count = adc_count - adc_error_count;
	}


	for (i = 0; i < 1; i++) {
	    for (j = 0; j < 1; j++) {
#ifdef P8722
		if ((((k++) % 10000) == 0) || !REMOTE_LINK) {
		    if (REMOTE_LINK) {
			sprintf(bootstr2,
				"SPI U%i %b          ",
				num_ai_chan, stuff);
			LCD_VC_puts(VC0, DS2, YES);
		    } else {
			sprintf(bootstr2,
				"SPI D%lu %lu         ",
				last_slave_int_count, slave_int_count);
			LCD_VC_puts(VC0, DS2, YES);
		    }
		    if (ADC_DATA) {
			sprintf(bootstr2,
				"The ADC is Done         "
				);
			LCD_VC_puts(VC0, DS3, YES);
		    } else {
			sprintf(bootstr2,
				"The ADC is Working             "
				);
			LCD_VC_puts(VC0, DS3, YES);
		    }
		    sprintf(bootstr2,
			    "R%u Err %lu, #%lu, I%lu    ",
			    (int) REMOTE_LINK, adc_error_count, adc_count, slave_int_count);
		    LCD_VC_puts(VC0, DS0, YES);
		    sprintf(bootstr2,
			    "A %u %u, I%u     ",
			    adc_buffer[0], adc_buffer[1], data_in2);
		    LCD_VC_puts(VC0, DS1, YES);
		}
#endif
	    }
	}

    }

}
