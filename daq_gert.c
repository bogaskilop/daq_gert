/*
 *     comedi/drivers/daq_gert.c
 *
 *     COMEDI - Linux Control and Measurement Device Interface
 *     Copyright (C) 1998 David A. Schleef <ds@schleef.org>
 *
 *     This program is free software; you can redistribute it and/or modify
 *     it under the terms of the GNU General Public License as published by
 *     the Free Software Foundation; either version 2 of the License, or
 *     (at your option) any later version.
 *
 *     This program is distributed in the hope that it will be useful,
 *     but WITHOUT ANY WARRANTY; without even the implied warranty of
 *     MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *     GNU General Public License for more details.
 *
 *     You should have received a copy of the GNU General Public License
 *     along with this program; if not, write to the Free Software
 *     Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 *
 */

/*
Driver: daq_gert in progress ...
 * 
 * 
 *  Added daq_gert.o to the
 *  comedi/drivers/Makefile
 *  obj-$(CONFIG_COMEDI_DAQ_GERT)           += daq_gert.o
 *  Added ARM to the comedi Kconfig file
 *  I add daq_gert to the comedi Kconfig file
 * 

 config COMEDI
        tristate "Data acquisition support (comedi)"
        depends on m
        depends on BROKEN || FRV || M32R || MN10300 || SUPERH || TILE || X86 || ARM
        ---help---
          Enable support a wide range of data acquisition devices
          for Linux.
 
config COMEDI_DAQ_GERT
        tristate "GERTBOARD support"
        depends on COMEDI_KCOMEDILIB
        ---help---
          Enable support for a raspi gertboard

          To compile this driver as a module, choose M here: the module will be
          called daq_gert.

 * 
 * 
Description: GERTBOARD daq-gert
Author: Fred Brooks <nsaspook@nsaspook.com>
 * 
Most of the actual GPIO,AI,AO code was copied from
 * 
WiringPI 
 * wiringPi:
 *      Arduino compatable (ish) Wiring library for the Raspberry Pi
 *      Copyright (c) 2012 Gordon Henderson
 *      Additional code for pwmSetClock by Chris Hall <chris@kchall.plus.com>
 *
 *      Thanks to code samples from Gert Jan van Loo and the
 *      BCM2835 ARM Peripherals manual, however it's missing
 *      the clock section /grr/mutter/
 ***********************************************************************
 * This file is part of wiringPi:
 *      https://projects.drogon.net/raspberry-pi/wiringpi/
 *
 *    wiringPi is free software: you can redistribute it and/or modify
 *    it under the terms of the GNU Lesser General Public License as
 *    published by the Free Software Foundation, either version 3 of the
 *    License, or (at your option) any later version.
 *
 *    wiringPi is distributed in the hope that it will be useful,
 *    but WITHOUT ANY WARRANTY; without even the implied warranty of
 *    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *    GNU Lesser General Public License for more details.
 *
 *    You should have received a copy of the GNU Lesser General Public
 *    License along with wiringPi.
 *    If not, see <http://www.gnu.org/licenses/>.
 ***********************************************************************

 * 
 Also 
 * 
 * Driver for Broadcom BCM2708 SPI Controllers
 *
 * Copyright (C) 2012 Chris Boot
 *
 * This driver is inspired by:
 * spi-ath79.c, Copyright (C) 2009-2011 Gabor Juhos <juhosg@openwrt.org>
 * spi-atmel.c, Copyright (C) 2006 Atmel Corporation
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.


Devices: [] GERTBOARD (daq_gert)
Status: inprogress (DIO 50%) (AI 1%) AO (0%) (My code cleanup 25%)
Updated: Wed, 3 Oct 2012 12:07:20 +0000

The DAQ-GERT appears in Comedi as a  digital I/O subdevice (0) with
17 or 21 channels, a analog input subdevice (1) with 2 single-ended channels,
a analog output subdevice(2) with 2 channels

Digital:  The comedi channel 0 corresponds to the GPIO WPi table order
channel numbers [0..7] will be outputs, [8..16/20] will be inputs
 * 0/2
 * 1/3
 * 4
 * 7    SPI CE1
 * 8    SPI CE0
 * 9    SPI SO
 * 10   SPI SI
 * 11   SPI CLK
 * 14   UART
 * 15   UART
 * 17
 * 18   PWM
 * 21/27
 * 22
 * 23
 * 24
 * 25
 * 
 The BCM2835 has 54 GPIO pins.
      BCM2835 data sheet, Page 90 onwards.
      There are 6 control registers, each control the functions of a block
      of 10 pins.
      Each control register has 10 sets of 3 bits per GPIO pin:

      000 = GPIO Pin X is an input
      001 = GPIO Pin X is an output
      100 = GPIO Pin X takes alternate function 0
      101 = GPIO Pin X takes alternate function 1
      110 = GPIO Pin X takes alternate function 2
      111 = GPIO Pin X takes alternate function 3
      011 = GPIO Pin X takes alternate function 4
      010 = GPIO Pin X takes alternate function 5

 So the 3 bits for port X are:
      X / 10 + ((X % 10) * 3)

Digital direction configuration: [0..1] are input only due to pullups,
 * all other ports can be input or outputs

Analog: The input  range is 0 to 1023 for 0.0 to 5.0 volts 
IRQ is assigned but not used.

 */

#include "../comedidev.h"
#include <linux/interrupt.h>
#include <linux/slab.h>
#include <linux/ioport.h>

/* Function stubs */
void (*pinMode) (int pin, int mode);
void (*pullUpDnControl) (int pin, int pud);
void (*digitalWrite) (int pin, int value);
void (*setPadDrive) (int group, int value);
int (*digitalRead) (int pin);
void (*setPadDrive) (int group, int value);
int (*digitalRead) (int pin);

/* Handy defines */
#ifndef SZ_16K
#define SZ_16K                          0x00004000
#endif

#define NUM_PINS        17

#define WPI_MODE_PINS            0
#define WPI_MODE_GPIO            1
#define WPI_MODE_GPIO_SYS        2
#define WPI_MODE_PIFACE          3

#define INPUT            0
#define OUTPUT           1
#define PWM_OUTPUT       2

#define LOW              0
#define HIGH             1

#define PUD_OFF          0
#define PUD_DOWN         1
#define PUD_UP           2

#ifndef TRUE
#define TRUE    (1==1)
#define FALSE   (1==2)
#endif

/* BCM Magic */
#define BCM_PASSWORD            0x5A000000

// Port function select bits
#define FSEL_INPT               0b000
#define FSEL_OUTP               0b001
#define FSEL_ALT0               0b100
#define FSEL_ALT0               0b100
#define FSEL_ALT1               0b101
#define FSEL_ALT2               0b110
#define FSEL_ALT3               0b111
#define FSEL_ALT4               0b011
#define FSEL_ALT5               0b010

/*
 Access from ARM Running Linux
      Take from Gert/Doms code. Some of this is not in the manual
      that I can find )-:
 */
#define BCM2708_PERI_BASE       0x20000000
#define GPIO_PADS               (BCM2708_PERI_BASE + 0x100000)
#define CLOCK_BASE              (BCM2708_PERI_BASE + 0x101000)
#define GPIO_BASE               (BCM2708_PERI_BASE + 0x200000)
#define GPIO_TIMER              (BCM2708_PERI_BASE + 0x00B000)
#define GPIO_PWM                (BCM2708_PERI_BASE + 0x20C000)

/* 
#define PAGE_SIZE               (4*1024)
#define BLOCK_SIZE              (4*1024)
 */


/* Locals to hold pointers to the hardware */

static volatile uint32_t *gpio;

/* Global for the RPi board rev */
extern unsigned int system_rev; // from the kernel symbol table export */
static unsigned int RPisys_rev;
static int gert_detected = TRUE; /* The SPI code has found the IO chips */
/* default to TRUE while testing */

static const struct comedi_lrange daqgert_ai_range = {1,
    {
        RANGE(0, 3.3),
    }};

static const struct comedi_lrange daqgert_ao_range = {1,
    {
        RANGE(0, 2.047),
    }};

/*
 Doing it the Arduino way with lookup tables...
      Yes, it's probably more innefficient than all the bit-twidling, but it
      does tend to make it all a bit clearer. At least to me!

 pinToGpio:
      Take a Wiring pin (0 through X) and re-map it to the BCM_GPIO pin
      Cope for 2 different board revisions here
 */
static int *pinToGpio;

static int pinToGpioR1 [64] = {
    17, 18, 21, 22, 23, 24, 25, 4, /* From the Original Wiki - GPIO 0 through 7 */
    0, 1, /* I2C  - SDA0, SCL0            wpi  8 -  9 */
    8, 7, /* SPI  - CE1, CE0              wpi 10 - 11 */
    10, 9, 11, /* SPI  - MOSI, MISO, SCLK      wpi 12 - 14 */
    14, 15, /* UART - Tx, Rx                wpi 15 - 16 */

    /* Padding: */

    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, /* ... 31 */
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, /* ... 47 */
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, /* ... 63 */
};

static int pinToGpioR2 [64] = {
    17, 18, 27, 22, 23, 24, 25, 4, /* From the Original Wiki - GPIO 0 through 7:   wpi  0 -  7 */
    2, 3, /* I2C  - SDA0, SCL0            wpi  8 -  9 */
    8, 7, /* SPI  - CE1, CE0              wpi 10 - 11 */
    10, 9, 11, /* SPI  - MOSI, MISO, SCLK      wpi 12 - 14 */
    14, 15, /* UART - Tx, Rx                wpi 15 - 16 */
    28, 29, 30, 31, /* New GPIOs 8 though 11        wpi 17 - 20 */

    /* Padding: */

    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, /* ... 31 */
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, /* ... 47 */
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, /* ... 63 */
};

/*
 gpioToGPFSEL:
      Map a BCM_GPIO pin to it's control port. (GPFSEL 0-5)
 */
static uint8_t gpioToGPFSEL [] = {
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
    3, 3, 3, 3, 3, 3, 3, 3, 3, 3,
    4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
    5, 5, 5, 5, 5, 5, 5, 5, 5, 5,
};

/*
 gpioToShift
      Define the shift up for the 3 bits per pin in each GPFSEL port
 */
static uint8_t gpioToShift [] = {
    0, 3, 6, 9, 12, 15, 18, 21, 24, 27,
    0, 3, 6, 9, 12, 15, 18, 21, 24, 27,
    0, 3, 6, 9, 12, 15, 18, 21, 24, 27,
    0, 3, 6, 9, 12, 15, 18, 21, 24, 27,
    0, 3, 6, 9, 12, 15, 18, 21, 24, 27,
};

/*
 gpioToGPSET:
      (Word) offset to the GPIO Set registers for each GPIO pin
 */
static uint8_t gpioToGPSET [] = {
    7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7,
    8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8,
};

/*
 gpioToGPCLR:
      (Word) offset to the GPIO Clear registers for each GPIO pin
 */
static uint8_t gpioToGPCLR [] = {
    10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10,
    11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11,
};

/*
 gpioToGPLEV:
      (Word) offset to the GPIO Input level registers for each GPIO pin
 */
static uint8_t gpioToGPLEV [] = {
    13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13,
    14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14,
};

/*
 * pinMode:
 *      Sets the mode of a pin to be input, output
 *********************************************************************************
 */

void pinModeGpio(int pin, int mode) {
    int fSel, shift;

    pin &= 63;

    fSel = gpioToGPFSEL [pin];
    shift = gpioToShift [pin];

    /**/ if (mode == INPUT)
        *(gpio + fSel) = (*(gpio + fSel) & ~(7 << shift)); /* Sets bits to zero = input */
    else if (mode == OUTPUT)
        *(gpio + fSel) = (*(gpio + fSel) & ~(7 << shift)) | (1 << shift);
}

void pinModeWPi(int pin, int mode) {
    pinModeGpio(pinToGpio [pin & 63], mode);
}

/*
 * digitalWrite:
 *      Set an output bit
 *********************************************************************************
 */

void digitalWriteWPi(int pin, int value) {
    pin = pinToGpio [pin & 63];

    if (value == LOW)
        *(gpio + gpioToGPCLR [pin]) = 1 << (pin & 31);
    else
        *(gpio + gpioToGPSET [pin]) = 1 << (pin & 31);
}

void digitalWriteGpio(int pin, int value) {
    pin &= 63;

    if (value == LOW)
        *(gpio + gpioToGPCLR [pin]) = 1 << (pin & 31);
    else
        *(gpio + gpioToGPSET [pin]) = 1 << (pin & 31);
}

/*
 * digitalRead:
 *      Read the value of a given Pin, returning HIGH or LOW
 *********************************************************************************
 */

int digitalReadWPi(int pin) {
    pin = pinToGpio [pin & 63];

    if ((*(gpio + gpioToGPLEV [pin]) & (1 << (pin & 31))) != 0)
        return HIGH;
    else
        return LOW;
}

int digitalReadGpio(int pin) {
    pin &= 63;

    if ((*(gpio + gpioToGPLEV [pin]) & (1 << (pin & 31))) != 0)
        return HIGH;
    else
        return LOW;
}

/*
 * piBoardRev:
 *	Return a number representing the hardware revision of the board.
 *	Revision is currently 1 or 2. -1 is returned on error.
 *********************************************************************************
 */

int piBoardRev(struct comedi_device *dev) {
    int r = -1;
    static int boardRev = -1;

    if (boardRev != -1)
        return boardRev;

    dev_info(dev->class_dev, "RPi Board Rev %u\n", RPisys_rev);
    r = RPisys_rev;

    if (r == -1) {
        return -1;
    }

    if ((r == 2) || (r == 3))
        boardRev = 1;
    else if ((r == 4) || (r == 5) || (r == 6))
        boardRev = 2;
    else {
        return -1;
    }

    return boardRev;
}

/*
 * wiringPiSetup:
 *	Must be called once at the start of your program execution.
 *
 * Default setup: Initialises the system into wiringPi Pin mode and uses the
 *	memory mapped hardware directly.
 *********************************************************************************
 */

int wiringPiSetup(struct comedi_device *dev) {
    int boardRev;

    pinMode = pinModeWPi;
    digitalWrite = digitalWriteWPi;
    digitalRead = digitalReadWPi;

    if ((boardRev = piBoardRev(dev)) < 0)
        return -1;

    if (boardRev == 1)
        pinToGpio = pinToGpioR1;
    else
        pinToGpio = pinToGpioR2;
    return 0;
}

/*
 * wiringPiSetupGpio:
 *	Must be called once at the start of your program execution.
 *
 * GPIO setup: Initialises the system into GPIO Pin mode and uses the
 *	memory mapped hardware directly.
 *********************************************************************************
 */

int wiringPiSetupGpio(struct comedi_device *dev) {
    int x;

    if ((x = wiringPiSetup(dev)) < 0)
        return x;

    pinMode = pinModeGpio;
    digitalWrite = digitalWriteGpio;
    digitalRead = digitalReadGpio;

    return 0;
}

struct daqgert_board {
    const char *name;
};

/* FIXME Slow brute forced IO bits */

/* need to use state to optimize changes */
static int daqgert_dio_insn_bits(struct comedi_device *dev,
        struct comedi_subdevice *s,
        struct comedi_insn *insn, unsigned int *data) {
    int pinWPi, maxpins = 16;
    if (data[0]) {
        s->state &= ~data[0];
        s->state |= (data[0] & data[1]);

        if (data[0] & 0xff) {
            /* OUT testing with gpio pins  */
            digitalWriteWPi(0, (s->state & 0x01) >> 0);
            digitalWriteWPi(1, (s->state & 0x02) >> 1);
            digitalWriteWPi(2, (s->state & 0x04) >> 2);
            digitalWriteWPi(3, (s->state & 0x08) >> 3);
            digitalWriteWPi(4, (s->state & 0x10) >> 4);
            digitalWriteWPi(5, (s->state & 0x20) >> 5);
            digitalWriteWPi(5, (s->state & 0x40) >> 6);
            digitalWriteWPi(7, (s->state & 0x80) >> 7);
        }
    }

    data[1] = s->state & 0xff;
    /* IN testing with gpio pins  8..17 or 20 */
    if (RPisys_rev > 3) maxpins = 20; /* read extra 4 pins */
    for (pinWPi = 8; pinWPi <= maxpins; pinWPi++) {
        if (gert_detected && (pinWPi >= 10 && pinWPi <= 14)) { /* skip SPI pins */
        } else data[1] |= digitalReadWPi(pinWPi) << pinWPi; /* shift into place */
    }
    return insn->n;
}

static int daqgert_dio_insn_config(struct comedi_device *dev,
        struct comedi_subdevice *s,
        struct comedi_insn *insn, unsigned int *data) {
    unsigned int chan = 1 << CR_CHAN(insn->chanspec);

    switch (data[0]) {
        case INSN_CONFIG_DIO_INPUT:
            break;
        case INSN_CONFIG_DIO_OUTPUT:
            break;
        case INSN_CONFIG_DIO_QUERY:
            data[1] = (s->io_bits & chan) ? COMEDI_OUTPUT : COMEDI_INPUT;
            break;
        default:
            return -EINVAL;
    }

    return insn->n;
}

static int daqgert_ai_rinsn(struct comedi_device *dev,
        struct comedi_subdevice *s,
        struct comedi_insn *insn, unsigned int *data) {
    int n, chan;
    int d = 512;

    enum {
        TIMEOUT = 100
    };

    chan = CR_CHAN(insn->chanspec);

    /* convert n samples */
    for (n = 0; n < insn->n; n++) {
        data[n] = d;
    }
    return n;
}

static int daqgert_ao_winsn(struct comedi_device *dev,
        struct comedi_subdevice *s,
        struct comedi_insn *insn, unsigned int *data) {
    unsigned int n, junk;
    unsigned int chan;

    chan = CR_CHAN(insn->chanspec);

    for (n = 0; n < insn->n; n++) {
        junk = data[n];
    }

    return n;
}

static int daqgert_ao_rinsn(struct comedi_device *dev,
        struct comedi_subdevice *s,
        struct comedi_insn *insn, unsigned int *data) {
    unsigned int n;
    unsigned int chan;

    chan = CR_CHAN(insn->chanspec);

    for (n = 0; n < insn->n; n++) {
        data[n] = 128;
    }

    return n;
}

/*
 * This function sets the ALT mode on the SPI pins so that we can use them with
 * the SPI hardware.
 *
 * FIXME: This is a hack. Use pinmux / pinctrl.
 */
static void bcm2708_init_pinmode(void) {
#define INP_GPIO(g) *(gpio+((g)/10)) &= ~(7<<(((g)%10)*3))
#define SET_GPIO_ALT(g,a) *(gpio+(((g)/10))) |= (((a)<=3?(a)+4:(a)==4?3:2)<<(((g)%10)*3))

    int pin;

    /* SPI is on GPIO 7..11 */
    for (pin = 7; pin <= 11; pin++) {
        INP_GPIO(pin); /* set mode to GPIO input first */
        SET_GPIO_ALT(pin, 0); /* set mode to ALT 0 */
    }

#undef INP_GPIO
#undef SET_GPIO_ALT
}

static int bcm2708_check_pinmode(void) { // lets just say it works for now */
#define INP_GPIO(g) *(gpio+((g)/10)) &= ~(7<<(((g)%10)*3))
#define SET_GPIO_ALT(g,a) *(gpio+(((g)/10))) |= (((a)<=3?(a)+4:(a)==4?3:2)<<(((g)%10)*3))

    int pin;

    /* SPI is on GPIO 7..11 */
    for (pin = 7; pin <= 11; pin++) {
        INP_GPIO(pin); /* set mode to GPIO input first */
        SET_GPIO_ALT(pin, 0); /* set mode to ALT 0 */
    }
    /* look for SPI offboard chip responses */
    /* Just pass gert_detected for now */

#undef INP_GPIO
#undef SET_GPIO_ALT
    if (gert_detected) return TRUE;
    return FALSE;
}

static int daqgert_ai_config(struct comedi_device *dev,
        struct comedi_subdevice *s) {
    /* SPI data transfers */
    bcm2708_init_pinmode(); /* for access to the ADC/DAC later */
    return 16; /* for for compat with ni_daq_700 used for driver testing */
}

static int daqgert_ao_config(struct comedi_device *dev,
        struct comedi_subdevice *s) {
    /* Stuff here? */
    return 2;
}

static int daqgert_attach(struct comedi_device *dev, struct comedi_devconfig *it) {
    const struct daqgert_board *thisboard = comedi_board(dev);
    struct comedi_subdevice *s;
    int ret, num_subdev = 1, num_dio_chan = 17, num_ai_chan = 16, num_ao_chan = 2;

    /* Use the kernel system_rev EXPORT_SYMBOL */
    RPisys_rev = system_rev; /* what board are we running on? */
    if (RPisys_rev < 2) {
        dev_err(dev->class_dev, "Invalid RPi board revision! %u\n", RPisys_rev);
        return -EINVAL;
    }

    gpio = ioremap(GPIO_BASE, SZ_16K); /* lets get access to the GPIO base */
    if (!gpio) {
        dev_err(dev->class_dev, "Invalid io base address!\n");
        return -EINVAL;
    }
    dev->iobase = GPIO_BASE; /* filler */

    gert_detected = bcm2708_check_pinmode(); /* looking for a GERT Board */
    if (gert_detected) {
        dev_info(dev->class_dev, "Gert Board Detected\n");
        num_subdev = 3;
    } else {
        dev_info(dev->class_dev, "No GERT Board Found, GPIO pins only.\n");
    }

    wiringPiSetup(dev); /* setup the pin array */
    /* 4 pins for testing  */
    pinModeWPi(8, INPUT);
    pinModeWPi(9, INPUT);
    pinModeWPi(10, INPUT);
    pinModeWPi(11, INPUT);
    pinModeWPi(12, INPUT);
    pinModeWPi(13, INPUT);
    pinModeWPi(14, INPUT);
    pinModeWPi(15, INPUT);
    pinModeWPi(16, INPUT);
    if (RPisys_rev > 3) { /* This a Rev 2 board "I hope" */
        num_dio_chan = 21;
        pinModeWPi(17, INPUT);
        pinModeWPi(18, INPUT);
        pinModeWPi(19, INPUT);
        pinModeWPi(20, INPUT);
    }
    pinModeWPi(0, OUTPUT);
    pinModeWPi(1, OUTPUT);
    pinModeWPi(2, OUTPUT);
    pinModeWPi(3, OUTPUT);
    pinModeWPi(4, OUTPUT);
    pinModeWPi(5, OUTPUT);
    pinModeWPi(6, OUTPUT);
    pinModeWPi(7, OUTPUT);
    dev->board_name = thisboard->name;

    ret = comedi_alloc_subdevices(dev, num_subdev);
    if (ret)
        return ret;

    /* daq-gert dio */
    s = &dev->subdevices[0];
    s->type = COMEDI_SUBD_DIO;
    s->subdev_flags = SDF_READABLE | SDF_WRITABLE;
    s->n_chan = num_dio_chan;
    s->range_table = &range_digital;
    s->maxdata = 1;
    s->insn_bits = daqgert_dio_insn_bits;
    s->insn_config = daqgert_dio_insn_config;
    s->state = 0;
    s->io_bits = 0x00ff;

    if (num_subdev > 1) { /* we have the SPI ADC DAC on board */
        /* daq-gert ai */
        s = &dev->subdevices[1];
        num_ai_chan = daqgert_ai_config(dev, s); /* config SPI ports for ai use */
        s->type = COMEDI_SUBD_AI;
        /* we support single-ended (ground)  */
        s->subdev_flags = SDF_READABLE | SDF_GROUND;
        s->n_chan = num_ai_chan;
        s->maxdata = (1 << 10) - 1;
        s->range_table = &daqgert_ai_range;
        s->insn_read = daqgert_ai_rinsn;

        /* daq-gert ao */
        s = &dev->subdevices[2];
        num_ao_chan = daqgert_ao_config(dev, s); /* config SPI ports for ao use */
        s->type = COMEDI_SUBD_AO;
        /* we support single-ended (ground)  */
        s->subdev_flags = SDF_WRITABLE | SDF_GROUND;
        s->n_chan = num_ao_chan;
        s->maxdata = (1 << 8) - 1;
        s->range_table = &daqgert_ao_range;
        s->insn_write = daqgert_ao_winsn;
        s->insn_read = daqgert_ao_rinsn;
    }

    dev_info(dev->class_dev, "%s: %s, iobase 0x%lx, ioremap 0x%lx\n",
            dev->driver->driver_name,
            dev->board_name,
            dev->iobase,
            (long unsigned int) gpio);

    return 0;
}

static void daqgert_detach(struct comedi_device *dev) {
    iounmap(gpio);
}

static const struct daqgert_board daqgert_boards[] = {
    {
        .name = "daq-gert",
    },
    {
        .name = "daq_gert",
    },
};

static struct comedi_driver daqgert_driver = {
    .driver_name = "daq_gert",
    .module = THIS_MODULE,
    .attach = daqgert_attach,
    .detach = daqgert_detach,
    .board_name = &daqgert_boards[0].name,
    .num_names = ARRAY_SIZE(daqgert_boards),
    .offset = sizeof (struct daqgert_board),
};

static int __init daqgert_init(void) {
    int ret;

    ret = comedi_driver_register(&daqgert_driver);
    if (ret < 0)
        return ret;

    return 0;
}
module_init(daqgert_init);

static void __exit daqgert_exit(void) {
    comedi_driver_unregister(&daqgert_driver);
}
module_exit(daqgert_exit);

MODULE_AUTHOR("Fred Brooks <nsaspook@nsaspook.com>");
MODULE_DESCRIPTION(
        "Comedi driver for RASPI GERTBOARD DIO/AI/AO");
MODULE_VERSION("0.0.02");
MODULE_LICENSE("GPL");
