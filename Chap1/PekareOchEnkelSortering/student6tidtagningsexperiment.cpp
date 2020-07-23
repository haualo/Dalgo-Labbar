#include "student6tidtagningsexperiment.h"
#include "student1.h"
#include "student5Sortings.h"

#include <QElapsedTimer>
#include <stdio.h>
#include <math.h>
#include "student5Sortings.h"

typedef void(*sortFunction)(float* pBegin,  float* pEnd);

float timeToSort(sortFunction sorter, const char* nameOfFunction, int sizeOfArray){
    float *pArr = new float[sizeOfArray];
    fillWithRandomI( pArr, pArr+sizeOfArray);
    printf("Vi kommer nu att sortera %d tal med %s. Tryck return!:", sizeOfArray, nameOfFunction);
    scanf("%*c");

    QElapsedTimer myTimer;
    myTimer.start();

    sorter(pArr, pArr+sizeOfArray);

    float elapsedTime = (float) myTimer.elapsed()/ 1000.0;
    printf("Fardig! Och det tog %.3f sekunder. \n", elapsedTime );
    delete [] pArr;
    return elapsedTime;
}

void ragnarsTidtagningsexperiment(){
    int size = 100000;
    printf("Välkommen till Ragnars tidtagningexpreimet!\n");
    printf("Vi skall sortera %d element pa olika satt!\n", size);

    printf("\n");
    printf("Skriv körtiderna i nedanstående komentar!\n");

    printf("(Det kan dröja upp till nagon minut!)\n");


    timeToSort( bubbleSortI, "bubbleSortI", size );
    timeToSort( bubbleSortP, "bubbleSortP", size );
    timeToSort( insertSortI, "insertSortI", size );
    timeToSort( insertSortP, "insertSortP", size );

    printf("ok, lat oss ocksa prova std::sort (som behandlas senare i kursen)\n");

    timeToSort( std::sort, "std::sort", size );

/*
    TODO
    Körtider:

    BubbleI :  56.808 sec
    BubbleP :  15.540 sec

    InsertI :  0 sec
    InsertP :  10.183 sec

    std::sort : 0.017 sec

  */
}

void testingCode6(){
    printf("\n\n\n testingCode6  \n\n");

    ragnarsTidtagningsexperiment();
}
