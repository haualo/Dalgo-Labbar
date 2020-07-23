#include "student4thoughtreading.h"
#include <stdio.h>



// ################ MAGI! Förklara hur tankeläsningen fungerar! #################

void tankPaEttTal(){
    int x = 1088;
    printf( "Denna funktion tanker pa ett hemligt tal (%d)\n", x);
}

void tankelasning(){
    int  hemligheten;
    printf( "Denna funktion tror att den andra funktionens hemlighet ar %d!\n", hemligheten);
}

void experimentMedTankeoverforing(){
    printf("Experiment med tankeoverforing!\n");
    printf("(studera utskrifterna sa att du kan forklara dem i kommentaren)\n");
    tankPaEttTal();
    tankelasning();


    /* TODO
       Förklaring:

        Den får x:s address detta pga att hemlighet har inte vått någon så därför tar det från det gamla int.

     */
}




void testingCode4(){

    printf("\n\n\n testingCode4  \n\n");

    experimentMedTankeoverforing();

}

