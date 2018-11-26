

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
    if(pTree == nullptr){
        pTree->flash();
        return false;
    }
    if(key < pTree->_key){
        pTree->flash();
        return contains(pTree->_pLeft, key);
    }
    if(key > pTree->_key){
        pTree->flash();
        return contains(pTree->_pRight, key);
    }
    return true;

}


Node* nodeWithMinimumKey(Node *pTree){

    if(pTree == nullptr){
        pTree->flash();
        return nullptr;
    }

    if(pTree->_pLeft == nullptr){
        pTree->flash();
        return pTree;
    }
    pTree->flash();
    return nodeWithMinimumKey(pTree->_pLeft);
}

void removeKeyFromSearchtree(Node* &pTree, int key){

    if(pTree == nullptr){
        pTree->flash();
        return;
    }else if (key < pTree->_key){
        pTree->flash();
        removeKeyFromSearchtree((pTree->_pLeft), key);
    }else if(key > pTree->_key){
        pTree->flash();
        removeKeyFromSearchtree((pTree->_pRight), key);
    }else{
        if(pTree->_pLeft == nullptr || pTree->_pRight == nullptr){
            Node *pOldNode = pTree;
            pTree->flash();
            pTree = (pTree->_pLeft!=nullptr ? pTree->_pLeft : pTree->_pRight);
            delete pOldNode;
        }else
        {
            pTree->flash();
            pTree->_key = nodeWithMinimumKey(pTree->_pRight)->_key;
            pTree->flash();
            removeKeyFromSearchtree((pTree->_pRight), pTree->_key);
        }
    }

}

/*** redogörelse för experiment ***************************************

  Hur stort blir trädets höjd respektive genomsnittliga
   djup om man stoppar in 255 element (gör flera experiment)?

  TODO...

  höjd = 18

  genomsnittligt djup = ...

  (gör flera experiment)

  varför är det genomsnittliga djupet intressant? ...


 ******************************************************************************/



