#include "student3swaps.h"
#include <stdio.h>


const char* nameOfTheStudent3(){
    return "Haval Sarbast";  // Byt ut denna sträng mot ditt eget namn!
}


// ################ Implementera swap med pekar- och referensanrop #################



// ANROP:   swap(a,b); eller swap( (&a), (&b) );
// UPPGIFT: Byter värden mellan a och b.
void swap(float* pa, float* pb){

    float temp;

    temp = *pa;
    *pa = *pb;
    *pb = temp;


}

// ANROP:   swap(a,b); eller swap((a), (b));
// UPPGIFT: Byter värden mellan a och b.
void swap(float &a, float &b){
    float temp;

    temp = a;
    a = b;
    b = temp;

}


void studentsTest3(){
  // TODO! Skriv din testkod här

    float a =10;
    float b = 99;
    printf("A i början:%2.f\n", a);
    printf("B i början:%2.f\n", b);
    swap(a, b);
    printf("Efter Swap A:%2.f\n", a);
    printf("Efter Swap B:%2.f\n", b);
}

void testingCode3(){



    printf("\n\n\n testingCode3  \n\n");

    studentsTest3();
}
