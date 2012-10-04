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
#include <X11/StringDefs.h>
#include <X11/Intrinsic.h>
#include <X11/Xaw/Box.h> 
#include <X11/Xaw/Label.h>        /* Include the Label widget's header file. */
#include <X11/Xaw/Cardinals.h>  /* Definition of ZERO. */
#include <X11/Xaw/Command.h> 


struct bmcdata bmc;
String fallback_resources[] = {"*Label.Label:    BMC", NULL};

void quit(w, client, call)
Widget w;
XtPointer client;
XtPointer call;
{

    exit(0);

}

int main(int argc, char *argv[]) {

    Widget toplevel;
    Widget box;
    Widget command;
    Widget label;
    void quit();
    Arg wargs[10];
    int n;

    // Xwindows stuff for later
    toplevel = XtInitialize(argv[0], "simple", NULL, 0,
            &argc, argv);
    box = XtCreateManagedWidget("box", boxWidgetClass,
            toplevel, NULL, 0);
    n = 0;
    XtSetArg(wargs[n], XtNorientation, XtorientVertical);
    n++;
    XtSetArg(wargs[n], XtNvSpace, 10);
    n++;
    XtSetValues(box, wargs, n);
    label = XtCreateManagedWidget("label",
            labelWidgetClass, box, NULL, 0);
    n = 0;
    XtSetArg(wargs[n], XtNlabel, "Hello World");
    n++;
    XtSetValues(label, wargs, n);
    command = XtCreateManagedWidget("command",
            commandWidgetClass, box, NULL, 0);
    n = 0;
    XtSetArg(wargs[n], XtNlabel, "press and die");
    n++;
    XtSetValues(command, wargs, n);
    XtAddCallback(command, XtNcallback, quit, NULL);
    XtRealizeWidget(toplevel);

    

    if (init_daq(-25.0, 25.0) < 0) return -1;
    if (init_dio() < 0) return -1;
    get_data_sample();

    while (1) {
        printf("         \r");
        get_data_sample();
        printf(" %2.2fV %2.2fV %2.2fV %2.2fV %2.2fV %2.2fV %2.2fV %u %u %u %u",
                bmc.pv_voltage, bmc.cc_voltage, bmc.input_voltage, bmc.b1_voltage, bmc.b2_voltage, bmc.system_voltage, bmc.logic_voltage,
                bmc.datain.D5, bmc.datain.D4, bmc.datain.D1, bmc.datain.D0);
        usleep(49999);
        //        XtMainLoop(); // Xwindows stuff for later...
    }

    return 0;
}


