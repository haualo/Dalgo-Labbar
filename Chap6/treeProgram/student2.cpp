

#include "node.h"
#include <stdio.h>
#include <algorithm>
#include <deque>
#include "visualnode.h"
#include "students.h"




/**************************************************************************
 * Sökträd.
 *
 *
 **************************************************************************/

void insertKeyToSearchtree(Node*& pTree, int key){
    if(pTree == nullptr){
        pTree = new Node(key, nullptr, nullptr);
        pTree->flash();
    }else if(key < pTree->_key){
        insertKeyToSearchtree((pTree->_pLeft), key);
        pTree->flash();
    }else if(key > pTree->_key){
        insertKeyToSearchtree((pTree->_pRight), key);
        pTree->flash();
    }else
        ;

}

bool contains(Node *pTree, int key){
    return false; // bug
}


Node* nodeWithMinimumKey(Node *pTree){
    return nullptr; // bug
}

void removeKeyFromSearchtree(Node* &pTree, int key){

}

/*** redogörelse för experiment ***************************************

  Hur stort blir trädets höjd respektive genomsnittliga
   djup om man stoppar in 255 element (gör flera experiment)?

  TODO...

  höjd = ..

  genomsnittligt djup = ...

  (gör flera experiment)

  varför är det genomsnittliga djupet intressant? ...


 ******************************************************************************/



