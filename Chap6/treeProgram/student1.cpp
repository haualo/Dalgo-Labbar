#include "node.h"
#include <stdio.h>
#include <algorithm>
#include <deque>

#include "students.h"


/**************************************************************************
 * Trädklättring.
 *
 *
 **************************************************************************/

void flashPreOrder(Node *pTree){

    if(pTree==nullptr) {
        return;
    }

        pTree->flash();
        flashPreOrder(pTree->_pLeft);
        flashPreOrder(pTree->_pRight);

}

void flashInOrder(Node *pTree){

    if(pTree==nullptr) {
        return;
    }
        flashInOrder(pTree->_pLeft);
        pTree->flash();
        flashInOrder(pTree->_pRight);

}

void flashPostOrder(Node *pTree){
    if(pTree==nullptr) {
        return;
    }

        flashPostOrder(pTree->_pLeft);
        flashPostOrder(pTree->_pRight);
        pTree->flash();

}



void flashNodesAtIncreasingDepth(Node *pTree){

    if(pTree== nullptr){
        return;
    }

    std::deque<Node*> que;
    que.push_back( pTree);
    pTree->flash();


    while(!que.empty()){

        Node *p = que.front();
        p->flash();
        que.pop_front();

        if(p->_pLeft){
            que.push_back(p->_pLeft);

        }

        if(p->_pRight){
            que.push_back(p->_pRight);
        }
    }





}

int numberOfNodes(Node *pTree){

    if(pTree == nullptr){
        return 0;
    }

    return 1 + numberOfNodes(pTree->_pLeft) + numberOfNodes(pTree->_pRight);
}

int height(Node *pTree){

    if(pTree == nullptr){
        return -1;
    }
    int leftSide = height(pTree->_pLeft);
    int rightSide = height(pTree->_pRight);

    if(leftSide > rightSide){
        pTree->flash();
        return leftSide +1;
    }else{
        pTree->flash();
        return rightSide +1;
    }

}


