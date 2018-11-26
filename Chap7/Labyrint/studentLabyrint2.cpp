#include "studentLabyrint2.h"
#include "rk.h"
#include "assert.h"
#include <vector>
#include <deque>

using namespace std;




RK rkOfNeighbor(RK rk, int ixOfneighbor){
    switch (ixOfneighbor){
    case 0 : return RK( rk._r,    rk._k +1);
    case 1 : return RK( rk._r,    rk._k -1);
    case 2 : return RK( rk._r +1, rk._k);
    case 3 : return RK( rk._r -1, rk._k);
    }
    assert( false );
    return RK();
}


bool foundShortestPathToGoalFIFO(IMaze *pMaze, int r, int k){

//    vector<vector<RK>> rkPrevious( pMaze->sizeR(), vector<RK>(pMaze->sizeK(), RK()));

//    deque<RK> fifo;

//    RK rkStart = RK(r,k);
//    fifo.push_back( rkStart );


    // TODO

    return false;
}

