#include "student5Sortings.h"
#include "student1.h"
#include "student3swaps.h"

#include "ragnarstest5.h"
#include <stdio.h> // printf


// Läs detta.
// Nedan finns version I och P av bubble- respektive insert-sort.

// Själv har jag implementerat I-versionerna.
// Det som återstår är P-versionerna!


// ************************************************************
// ANROP:   char* namn = nameOfStudent5();
// UPPGIFT: Returnerar ditt namn!
// ************************************************************
const char* nameOfTheStudent5(){
    return "Haval Sarbast";  // Byt ut denna sträng mot ditt eget namn!
}



/**********************************************************************************
 * ANROP:   bubbleSortI( pBegin, pEnd);
 * UPPGIFT: pBegin och pEnd definierar en array av element (pBegin pekar på det
 *          första elementet och pEnd EFTER det sista).
 *          Funktionen sorterar arrayen så att det minsta elementet hamnar först.
 *
 *          Algoritmen som används måste vara den version av bubbleSort som
 *          beskrivs i uppdragshäftet!!
 * ********************************************************************************/
void bubbleSortI(float *pBegin, float *pEnd){
    int size = pEnd - pBegin;
    for (int maxIndex = size-1 ; maxIndex>0 ; maxIndex -= 1)
        for (int i=0 ; i<maxIndex ; i+=1)
            if (pBegin[i]>pBegin[i+1])
                swap( (pBegin[i]), (pBegin[i+1]));
}


/**********************************************************************************
 * ANROP:   insertSortI( pBegin, pEnd);
 * UPPGIFT: pBegin och pEnd definierar en array av element (pBegin pekar på det
 *          första elementet och pEnd EFTER det sista).
 *          Funktionen sorterar arrayen så att det minsta elementet hamnar först.
 *
 *          Algoritmen som används måste vara den version av insertSort som
 *          beskrivs i uppdragshäftet!!
 * ********************************************************************************/
void insertSortI(float *pBegin, float *pEnd){

    int size = pEnd - pBegin;

    float myNum = 0;
    for( myNum = size-1; myNum > 0; myNum-=1){

        for(int i=0; i<size; i++){
            //float c;
            //for(c=beginValue; c>=nextValue && c>size; c-=1)
            if(pBegin[i] > pBegin[i+1]){
                myNum = pBegin[i+1];
                pBegin[i+1] = pBegin[i];
                pBegin[i] = myNum;

        }
        }
    }



}



void bubbleSortP(float *pBegin, float *pEnd){

   float *maxValue;
   float *pointerP;

   for(maxValue = pEnd-1; maxValue>pBegin; maxValue-=1){

       for(pointerP=pBegin; pointerP<maxValue; pointerP+=1){
           if(pointerP>(pointerP+1)){
               swap((*pointerP), (*(pointerP+1)));
           }
       }

   }

}


void insertSortP(float *pBegin, float *pEnd){

    for (float *pLastInOrder=pBegin; pLastInOrder<pEnd-1 ; pLastInOrder+=1){
        float x = *(pLastInOrder+1);
        float *p = pLastInOrder;
        for (   ; p>=pBegin && *p>x ; p-=1)
            *(p+1) = *p;
        *(p+1) = x;

    }

}


void studentsTest5(){

    // testa själv bubble- och insert- sort här!
    printf("dina egna tester borde komma har!\n");

    // TODO
    float arr[5] {5,4,3,1,2};

    bubbleSortP( &arr[0], &arr[5] );

    for(int i=0; i<5; i+=1){
        printf("(Arry%d:%2.f )\n",i+1, arr[i]);

    }

}


void testingCode5(){

    printf("\n\n\n testingCode5  \n\n");

    studentsTest5();


}
