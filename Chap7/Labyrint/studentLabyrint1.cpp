#include "studentLabyrint1.h"

bool didIndicatePathToGoal(IMaze *pMaze, int r, int k){
    // TODO



    if(pMaze->isGoal(r, k)){
        return true;
    }

    if(pMaze->hasStone(r,k)){
        return false;
    }else{
        pMaze->placeStone(r,k);

        pMaze->indicateThatRKIsOnPath(r, k);
        if(!pMaze->isWall(r, k)){
            return true;
        }

        if(!pMaze->isInside(r, k)){
            pMaze->indicateThatRKIsOnPath(r, k);
            return false;
        }

    }







    return false;

}


