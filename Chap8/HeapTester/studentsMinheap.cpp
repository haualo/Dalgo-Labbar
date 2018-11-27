#include "studentsMinheap.h"
#include "assert.h"



const char* nameOfStudent(){
    return "Homer Simpson";
}

MinHeap::MinHeap(int sizeOfArray)
    :_sizeOfArray(sizeOfArray)
{    
    _theArray = new int[_sizeOfArray];
    _size = 0;
}

MinHeap::~MinHeap(){
   // TODO
}

void MinHeap::insert(int data){
    assert( !isFull() );   // krascha om full

}


int MinHeap::min()
{
    assert( _size>0);
    return 0;
}


void MinHeap::deleteMin(){
    assert( !isEmpty() );

}


void MinHeap::percolateDown(int ix){

}

int MinHeap::size()
{
    return _size;
}


// Fyller heapens array med data utan att organisera det i en heap-struktur.
// (detta gör man istället interaktiv)
void MinHeap::fillArrayWithData(int *newData, int size)
{
    assert( size<_sizeOfArray);

    for (int i=1; i<=size ; i+=1)
        _theArray[i] = newData[i];
    _size = size;
}
