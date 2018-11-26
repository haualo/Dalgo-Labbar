
#include "node.h"
#include <stdio.h>
#include <algorithm>
#include <deque>

#include "students.h"


/**************************************************************************
 * Fler uppgifter.
 **************************************************************************/

bool didIndicatePathToTarget(Node *pTree){

    if(pTree == nullptr){
        return false;
    }

    if(pTree->isTarget()){
        pTree->makeRed();
        pTree->flash();
        return true;

    }else{
        pTree->flash();
        if(didIndicatePathToTarget(pTree->_pLeft)){
            pTree->makeRed();
            pTree->flash();
            return true;
        }else if(didIndicatePathToTarget(pTree->_pRight)){
            pTree->makeRed();
            pTree->flash();
            return true;
        }
    }


    return false;

}






