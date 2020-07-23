#include "student2reference.h"
#include <stdio.h>

const char* nameOfTheStudent2(){
    return "Haval Sarbast";  // Byt ut denna sträng mot ditt eget namn!
}




// ################ experiment med värde- pekar- och referensanrop #################



struct AnExampleStruct{
    int _intValue1;
    int _intValue2;
    float _array[1000];
};


// call by value, theStruct kommer att kopieras (även arrayen)
void printAddresses1(AnExampleStruct theStruct){
    printf("\n\n printAddress1\n");

    printf("&theStruct  = %lu\n",   (unsigned long) &theStruct);
    printf("&theStruct._intValue1  = %lu\n",  (unsigned long) &theStruct._intValue1);
    printf("&theStruct._intValue2  = %lu\n",  (unsigned long) &theStruct._intValue2);
    printf("&theStruct._array  = %lu\n",   (unsigned long) &theStruct._array);
}


// call by reference, theStruct är identisk med anroparens s.
void printAddresses2(const AnExampleStruct &theStruct){
    printf("\n\n printAddress2\n");

    printf("&theStruct  = %lu\n",  (unsigned long)&theStruct);
    printf("&theStruct._intValue1  = %lu\n",  (unsigned long)&theStruct._intValue1);
    printf("&theStruct._intValue2  = %lu\n",  (unsigned long)&theStruct._intValue2);
    printf("&theStruct._array  = %lu\n",  (unsigned long)&theStruct._array);
}

// call by pointer. Nu är (*pThestruct) identisk med anroparens s.
void printAddresses3(const AnExampleStruct *pTheStruct){
    printf("\n\n printAddress3\n");
    printf("pTheStruct  = %lu\n",  (unsigned long) pTheStruct);
    printf("&(*pTheStruct)._intValue1  = %lu\n",  (unsigned long) &(*pTheStruct)._intValue1);
    printf("&(*pTheStruct)._intValue2  = %lu\n",  (unsigned long) &(*pTheStruct)._intValue2);
    printf("&(*pTheStruct)._array  = %lu\n",   (unsigned long)&(*pTheStruct)._array);
}


// Experimentkoden är färdigskriven med betrakta utskrifterna!!
void experimentMedParameteroverforing(){

    printf("Experiment med parameteröverföring!\n");
    printf("(studera utskrifterna så att du kan förklara dem i nedanstående kommentar)\n");

    AnExampleStruct s;

    printAddresses1(s);
    printAddresses2(s);
    printAddresses3(&s);

    /* TODO
       Förklaring:

            Första sättet så kopieras S till ny struct och får därför en annan adress än de andra. Och de andra är const.

     */
}




void testingCode2(){

    printf("\n\n\n testingCode2  \n\n");

    experimentMedParameteroverforing();
}
