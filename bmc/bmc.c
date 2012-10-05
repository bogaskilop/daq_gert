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

    if (init_daq(0.0, 5.0) < 0) return -1;
    if (init_dio() < 0) return -1;
    get_data_sample();

    while (1) {
        printf("         \r");
        get_data_sample();
        printf(" %2.2fV %2.2fV %2.2fV %2.2fV %2.2fV %2.2fV %2.2fV %u %u %u %u",
                bmc.pv_voltage, bmc.cc_voltage, bmc.input_voltage, bmc.b1_voltage, bmc.b2_voltage, bmc.system_voltage, bmc.logic_voltage,
                bmc.datain.D5, bmc.datain.D4, bmc.datain.D1, bmc.datain.D0);
 	put_dio_bit(0, bmc.datain.D0);
    	put_dio_bit(1, bmc.datain.D1);
        usleep(49999);
    }
    return 0;
}


