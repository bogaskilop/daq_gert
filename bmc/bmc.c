/*
 * Demo code for driver testing, a simple console display of data inputs and voltage
 *
 * This file may be freely modified, distributed, and combined with
 * other software, as long as proper attribution is given in the
 * source code.
 */

#include <stdlib.h>
#include <stdio.h>	/* for printf() */
#include <unistd.h>
#include <string.h>
#include <comedilib.h>
#include "bmc/bmc.h"
#include "bmc/daq.h"

struct bmcdata bmc; /* DIO buffer */

int main(int argc, char *argv[]) {
    int blink[2], flip[2] = {0, 0};
    if (init_daq(0.0, 0.0,0) < 0) {
        printf("Missing Analog subdevice(s)\n");
        return -1;
    }
    if (init_dio() < 0) {
        printf("Missing Digital subdevice(s)\n");
        return -1;
    }
    put_dio_bit(0, 0);
    put_dio_bit(1, 0);
    get_data_sample();

    while (1) {
        printf("         \r");
        get_data_sample();
        printf(" %2.2fV %2.2fV %2.2fV %2.2fV %2.2fV %2.2fV %2.2fV %u %u %u %u",
                bmc.pv_voltage, bmc.cc_voltage, bmc.input_voltage, bmc.b1_voltage, bmc.b2_voltage, bmc.system_voltage, bmc.logic_voltage,
                bmc.datain.D5, bmc.datain.D4, bmc.datain.D1, bmc.datain.D0);
        usleep(499);
        if (bmc.datain.D0 == 0) {
            if (((blink[0]++) % 150) == 0) {
                flip[0] = !flip[0];
            }
            printf(" Flip led 0 %x ", flip[0]);
            bmc.dataout.D0 = flip[0];
        } else bmc.dataout.D0 = 0;
        if (bmc.datain.D1 == 0) {
            if (((blink[1]++) % 150) == 0) {
                flip[1] = !flip[1];
            }
            printf(" Flip led 1 %x ", flip[1]);
            bmc.dataout.D1 = flip[1];
        } else bmc.dataout.D1 = 0;
    }
    return 0;
}


