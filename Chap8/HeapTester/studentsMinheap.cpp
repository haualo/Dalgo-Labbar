#include "studentsMinheap.h"
#include "assert.h"



const char* nameOfStudent(){
    return "Haval Sarbast";
}

MinHeap::MinHeap(int sizeOfArray)
    :_sizeOfArray(sizeOfArray)
{    
    _theArray = new int[_sizeOfArray];
    _size = 0;
}

MinHeap::~MinHeap(){
   // TODO
    delete [] _theArray;
}

void MinHeap::insert(int data){
    assert( !isFull() );   // krascha om full

    _size +=1;
    int myX = _size;

    while(myX > 1 && _theArray[myX/2] > data){

        _theArray[myX] = _theArray[myX/2];
        myX /=2;
    }
    _theArray[myX] = data;
}


int MinHeap::min()
{
    assert( _size>0);
    return _theArray[1];
}


void MinHeap::deleteMin(){
    assert( !isEmpty() );

    _theArray[1] = _theArray[_size];
    --_size;
    percolateDown(1);

}


void MinHeap::percolateDown(int ix){

    int myX = _theArray[ix];

    while((ix*2) <=_size){
        int myxKid = ix*2;

        if(myxKid !=_size && _theArray[myxKid+1]<_theArray[myxKid]){
            ++myxKid;
        }
        if(_theArray[myxKid]>= myX){
            break;
        }
        _theArray[ix] = _theArray[myxKid];
        ix = myxKid;
    }
    _theArray[ix] = myX;

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
