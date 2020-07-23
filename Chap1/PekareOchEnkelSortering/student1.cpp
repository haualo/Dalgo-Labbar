#include "student1.h"
#include <stdio.h> // printf
#include <assert.h>
#include "ragnarstest1.h"
#include <ctime>
#include <stdlib.h>

// Läs Detta!

// Pekaruppdragen går ut på att implementera nedastående funktioner
// Många funktioner skall implementeras på två olika sätt (I och P):
// Version I: Räkna ut size och använd arraynotation med hakparanteser och heltalsindex.
// Version P: Använd istället pekarnotation, dvs  *p,  p+=1,  etc.



// ************************************************************
// ANROP:   char* namn = nameOfStudent1();
// UPPGIFT: Returnerar ditt namn!
// ************************************************************
const char* nameOfTheStudent1(){
    return "Haval Sarbast";  // Byt ut denna sträng mot ditt eget namn!
}




// ################ version I, löses med [ ]  och indexnotation #############



// ************************************************************
// ANROP:   float value = minimumElement(&arr[0], &arr[size]);
// UPPGIFT: Returnerar arrayens minsta värde
// ************************************************************
float minimumElementI(const float *pBegin, const float *pEnd){

    // Jag låter min egen lösnin ligga kvar.
    // Förstå denna! Lös de andra uppgifterna själv.

    assert( pBegin < pEnd );

    int size = pEnd - pBegin;
    float extreme = pBegin[0];
    for (int i=0; i<size ; i+=1)
        if (pBegin[i]<extreme)
            extreme = pBegin[i];
    return extreme;
}


// ************************************************************
// ANROP:   float value = maximumElement( &arr[0], &arr[size] );
// UPPGIFT: Returnerar arrayens största värde
// ************************************************************
float maximumElementI(const float *pBegin, const float *pEnd){

    // TODO

    assert( pBegin < pEnd );

    int size = pEnd - pBegin;

    float maxTal = pBegin[0];

    for (int i=0; i<size; i+=1){
        if(pBegin[i] > maxTal ){
            maxTal = pBegin[i];
        }
    }
    return maxTal;
}


// ************************************************************
// ANROP:   float value = averageElement( &arr[0], &arr[size] );
// UPPGIFT: Returnerar arrayens medelvärde
// ************************************************************
float averageElementI(const float *pBegin, const float *pEnd){

    // TODO
    assert( pBegin < pEnd );

    int size = pEnd - pBegin;
    float total=0 , medelEle;
    for(int i=0; i<size; i+=1){
        total += pBegin[i];        //adderar varje arry med sig själv för total

    }
    medelEle = total / size;        //medelvärde

    return medelEle;

}


// ************************************************************
// ANROP:   fillWithRandomI( &arr[0], &arr[size] );
// UPPGIFT: Fyller arrayen med oberoende slumpdata
// ************************************************************
void fillWithRandomI(float *pBegin, float *pEnd){
    // TODO

    srand(time(NULL));
    assert( pBegin < pEnd );

    int size = pEnd - pBegin;
    int i;
    for(i=0; i<size; i+=1){
        pBegin[i] = rand() % 10;             //placerar random tal för varje array
    }


}

// ************************************************************
// ANROP:   fillWithRandomI( &arr[0], &arr[size] );
// UPPGIFT: Fyller arrayen med sorterat slumpdata. Minst först
// ************************************************************
void fillWithRandomSortedI(float *pBegin, float *pEnd){
    // TODO
    assert( pBegin < pEnd );

    int size = pEnd - pBegin;
    int i;

    for(i=0; i<size; i+=1){
        pBegin[i] = rand() % 100+1;
        pBegin[i] = pBegin[i-1] + rand() %100+1;
    }

}


// ************************************************************
// ANROP:   bool contains = containedInArrayI(value,  &arr[0], &arr[size] );
// UPPGIFT: Returnerar true om arrayen innehåller angivet värde
// ************************************************************
bool  containedInArrayI(float value, const float *pBegin, const float *pEnd){

    assert( pBegin < pEnd );

    int size = pEnd - pBegin;
    int i;
    float tempTal;

    for(i=0; i<size; i+=1){
        tempTal = pBegin[i];
        if(tempTal == value){
            return true;
        }


    }


    return false;
}

// ************************************************************
// ANROP:   int number = numberOfValuesEqualToI(value,  &arr[0], &arr[size] );
// UPPGIFT: Returnerar antalet värden som är lika med angivet värde
// ************************************************************
int numberOfValuesEqualToI(float value, const float *pBegin, const float *pEnd){

    assert( pBegin < pEnd );

    int size = pEnd - pBegin;
    int antal=0, i;
    float oldValue;

    for(i=0; i<size; i+=1){
        oldValue = pBegin[i];
        if(oldValue == value){
            antal+=1;
        }
    }


    return antal;
}




// ################ version P, samma uppgifter löses nu med pekarnotation  ###############






float minimumElementP(const float *pBegin, const float *pEnd){
    // Jag låter min egen lösnin ligga kvar.
    // Förstå denna! Lös de andra uppgifterna själv.

    assert( pBegin < pEnd );
    float extreme = *pBegin;
    for (const float *p=pBegin ; p<pEnd; p+=1)
        if (*p<extreme)
            extreme = *p;
    return extreme;
}


float maximumElementP(const float *pBegin, const float *pEnd){
    // TODO

    assert( pBegin < pEnd );
    float maxValue = *pBegin;

    for(const float *p=pBegin ; p<pEnd; p+=1){
        if(*p>maxValue){
            maxValue = *p;
        }
    }

    return maxValue;
}

float averageElementP(const float *pBegin, const float *pEnd){
    // TODO
    assert( pBegin < pEnd );
    float total=0, medelValue=0, size=0;

    size = pEnd - pBegin;
    for(const float *p=pBegin ; p<pEnd; p+=1){
        total += *p;

    }
    medelValue = total/ size;


    return medelValue;
}


void fillWithRandomP(float *pBegin, float *pEnd){
    // TODO
    srand(time(NULL));
    assert( pBegin < pEnd );

    for(float *p=pBegin ; p<pEnd; p+=1){
        *p = rand() % 100+1;
    }

}

void fillWithRandomSortedP(float *pBegin, float *pEnd){
    // TODO
    assert( pBegin < pEnd );

    for(float *p=pBegin ; p<pEnd; p+=1){
        *p = rand() % 100+1;
        *p = *(p-1) + rand() % 100+1;

    }

}

bool containedInArrayP(float value, const float *pBegin, const float *pEnd){
    // TODO

    assert( pBegin < pEnd );

    float temp=0;

    for (const float *p=pBegin ; p<pEnd; p+=1){
        temp=*p;

        if(value == temp){
            return true;
        }

    }

    return false;
}


int  numberOfValuesEqualToP(float value, const float *pBegin, const float *pEnd){
    // TODO


    assert( pBegin < pEnd );

    int antal=0;
    float oldValue=0;

    for (const float *p=pBegin ; p<pEnd; p+=1){
        oldValue=*p;

        if(oldValue == value){
            antal +=1;
        }

    }

    return antal;
}




// ################ Skriv din egen testkod här! #################


void studentsTest1(){

    int size = 100;
    float arr[100];
    int value=0;


    fillWithRandomI( &arr[0], &arr[100] );
    fillWithRandomSortedI( &arr[0], &arr[100] );
    float maxValue = maximumElementI( &arr[0], &arr[100] );
    float minValue = minimumElementI( &arr[0], &arr[100] );
    float avgValue = averageElementI(&arr[0], &arr[100]);
    int number = numberOfValuesEqualToI(value,  &arr[0], &arr[100] );
    bool contains = containedInArrayI(value,  &arr[0], &arr[100] );

    // testa själv dina funktioner här!

    for(int i=0; i<size; i+=1){
        printf("(Arry:%2.f )\n", arr[i]);

    } //för random*/

    printf("Average Value: %2.f\n", avgValue);
    printf("MaxValue: %.2f\n", maxValue);
    printf("MinValue: %.2f\n", minValue);

    printf("Välj tal\n");
    scanf("%d", &value);
    printf("value: %d och antal: %d\n", value, number);

    printf("True(1) or False(0): %d", contains);

    // TODO

}




void testingCode1(){

   printf("\n\n\n testingCode1  \n\n");

   studentsTest1();


}

