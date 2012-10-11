
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

#include <p18cxxx.h>
#include <spi.h>
#include <adc.h>

#define SPI_SS_PIN	 PORTAbits.RA5
#define SPI_SS		LATAbits.LATA5

#define CMD_OK		0b11111110
#define CMD_ALIVE	0b11111101
#define CMD_FOO		0b11111011
#define CMD_DUMMY	0b11111111


#define	HIGH	1
#define	LOW	0

volatile unsigned char data_in1, data_in2, adc_buffer_ptr = 0,
	adc_channel = 0;
volatile unsigned long adc_count = 0, adc_error_count = 0;
volatile unsigned int adc_buffer[64] = {0};


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
    unsigned char bit_bucket;

    if (PIR1bits.ADIF) { // ADC conversion complete flag
	PIR1bits.ADIF = LOW;
	adc_count++; // just keep count
	adc_buffer[adc_buffer_ptr] = ADRESL + (ADRESH << 8);
	LATJ = adc_count >> 16; // show the adc count.
	LATEbits.LATE0 = !LATEbits.LATE0;
    }

    if (PIR1bits.SSP1IF) { // SPI port #1 SLAVE receiver
	PIR1bits.SSP1IF = LOW;
	data_in1 = SSP1BUF;
	LATEbits.LATE1 = !LATEbits.LATE1;

	if (data_in1 == CMD_ALIVE) { // Found a Master command
	    SSP1BUF = CMD_ALIVE; // Tell master  we are alive
	    LATEbits.LATE6 = !LATEbits.LATE6;
	    //	    if (ADCON0bits.GO = 0) LATJ = adc_buffer[adc_buffer_ptr]; // wait for conversion of in progress
	    ADCON0bits.GO = 1; // start a conversion
	}
	if (data_in1 == CMD_DUMMY) {
	    SSP1BUF = CMD_DUMMY; // Tell master  we are here
	}
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

void main(void) /* SPI Master/Slave loopback */
{
    int i, j;
    unsigned char junk;
    TRISB = 0xff; // external interrupts for later
    LATE = 0xff;
    LATJ = 0xff;
    TRISE = 0;
    TRISF = 0;
    TRISJ = 0;
    TRISHbits.TRISH0 = 0;
    LATHbits.LATH0 = 1;
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
    OpenSPI2(SPI_FOSC_16, MODE_01, SMPEND); // Must be SMPMID in slave mode, Port D 4,5,6
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
    for (i = 0; i < 1000; i++) {
	for (j = 0; j < 100; j++) {
	}
    }
    SSP1CON1bits.WCOL = SSP2CON1bits.WCOL = SSP1CON1bits.SSPOV = SSP2CON1bits.SSPOV = 0;

    while (1) {
	LATEbits.LATE7 = !LATEbits.LATE7;

	SSP2BUF = CMD_ALIVE; // Master sends data
	if (data_in2 != CMD_ALIVE) SSP2BUF = CMD_DUMMY; // Master sends DUMMY data;


	if (SSP1CON1bits.WCOL || SSP2CON1bits.WCOL || SSP1CON1bits.SSPOV || SSP2CON1bits.SSPOV) { // check for overruns/collisions
	    LATHbits.LATH0 = !LATHbits.LATH0;
	    SSP1CON1bits.WCOL = SSP2CON1bits.WCOL = SSP1CON1bits.SSPOV = SSP2CON1bits.SSPOV = 0;
	    adc_error_count = adc_count - adc_error_count;
	}

	/* Delay, so we can adjust SPI pace */
	for (i = 0; i < 1; i++) {
	    for (j = 0; j < 1; j++) {
	    }
	}

    };

}//end void main(void)
