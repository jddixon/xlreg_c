/* xlreg_client.c */

#include <stdio.h>      // for printf
#include <stdlib.h>     // for exit
#include <getopt.h>     // for getopt_long

#include "xlReg.h"

int main (int argc, char **argv) {
    // model is https://en.wikipedia.org/wiki/Getopt
    //
    int c;
    
    // pseudo-booleans; the static declaration eliminates an otherwise
    // mysterious error message from the compiler
    // "getopt_long initializer element is not constant"
    static int justShow=0, showVersion=0, verbose=0;
    static struct option long_options[] = {
        {"justShow",    no_argument,  &justShow,    1},
        {"showVersion", no_argument,  &showVersion, 1},
        {"verbose",     no_argument,  &verbose,     1},
        {NULL,0,NULL,0}         /* end of list */
    };
    

    int option_index = 0;

    while ((c = getopt_long(argc, argv, "jVv", long_options, &option_index)) != -1) {
        
        switch(c) {
        // if these are not wired in:
        case '?':
        case 'h':
            // DEBUG
            printf("-h seen\n");
            // END
            /* display usage message */
            break;
        case 'j':
            // DEBUG
            printf("-j seen\n");
            // END
            justShow = 1;
            break;
        case 'V':
            // DEBUG
            printf("-V (UC) seen\n");
            // END
            showVersion = 1;
            break;
        case 'v':
            // DEBUG
            printf("-v (LC) seen\n");
            // END
            verbose = 1;
            break;
        }

    }

    if (showVersion) {
        printf("%s %s %s\n", "xlRegClient", VERSION, VERSION_DATE);
        exit(0);
     }


     // do other stuff
     //
     exit(0);
}
