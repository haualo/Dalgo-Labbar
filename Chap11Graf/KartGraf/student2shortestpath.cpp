#include "student2shortestpath.h"

#include <queue>
#include <assert.h>
#include <QDebug>

using namespace std;



const char* nameOfStudent2(){
    return "Haval Sarbast";
}



vector<Ixnode> shortestPathBetweenNodes(const std::vector<Node>& graph,
                                        Ixnode ixStart, Ixnode ixStop, IVisualFeedback* pFeedback){

    struct Nodeinfo{
        Ixnode _ixPrevious;
        bool   _hasKnownDistance;
        Nodeinfo(Ixnode ixPrevious=-1, bool hasKnownDistance = false)
            : _ixPrevious(ixPrevious),_hasKnownDistance(hasKnownDistance) {}
    };

    struct Input{
        Ixnode _ixFrom;
        Ixnode _ixTo;
        float  _accumulatedCost;

        Input(Ixnode ixFrom=-1,Ixnode ixTo=-1,  float accumulatedCost=2e20) : _ixFrom(ixFrom), _ixTo(ixTo),  _accumulatedCost(accumulatedCost) {}

        bool operator()(const Input& a, const Input& b ) const {
                return a._accumulatedCost > b._accumulatedCost;
        }
    };

    qDebug() << "isStart = " << ixStart << ", ixStop " << ixStop;

    vector<Nodeinfo>  infoAboutNode(graph.size(), Nodeinfo());

    priority_queue<Input, vector<Input>, Input> inputsToBeExamined;


    inputsToBeExamined.push( Input(-1, ixStart, 0.0) );

    // TODO
    // du kan också radera de deklarationer jag lämnat kvar, om du vill.

    qDebug() << "No Path Found!!!";

    return vector<Ixnode>();

}


// Nedanstående är innget uppdrag. Den annropas när A* är vald.
vector<Ixnode> shortestPathBetweenNodes2(const std::vector<Node>& graph,
                                        Ixnode ixStart, Ixnode ixStop, IVisualFeedback* pFeedback){

    return vector<Ixnode>();

}
