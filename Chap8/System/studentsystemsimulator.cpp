#include "studentsystemsimulator.h"

#include "stdio.h"

#include <iostream>
#include <string>
#include <iostream>
#include <queue>
#include <vector>
#include <assert.h>

#include <sstream>


using namespace std;


const char* nameOfStudent(){
    return "Homer Simpson";
}

struct Customer{
    string _name;
    int    _arrival;
    int    _timeSpent;

};

struct Event{
    string _name;
    int    _timeToLeave;
    Event(string name, int timeToLeave): _name(name), _timeToLeave(timeToLeave) {}
};


struct AWorseThanB {
    bool operator()(const Event& a, const Event& b){
        return a._timeToLeave >b._timeToLeave;
    }
};

// ANROP:   string str = timestring( secondsAfterMidnight)
string timestring(int secondsAfterMidnight){

    const int secondsPerMinute = 60;
    const int secondsPerHour = 60 * secondsPerMinute;
    const int secondsPerDay  = 24 * secondsPerHour;

    int d = secondsAfterMidnight/secondsPerDay;
    int h = (secondsAfterMidnight / secondsPerHour ) % 24;
    int m = (secondsAfterMidnight / secondsPerMinute) % 60;
    int s = secondsAfterMidnight % secondsPerMinute;

    char buffer[100];
    snprintf ( buffer, 100, "[%d] %02d:%02d:%02d", d,h,m,s);

    return string( buffer );
}

// ANROP: ok = didReadCustomer(fp, (&customer));
bool didReadCustomer(FILE* fp, Customer *pCustomer){

    char name[100];
    int timeArrive;
    int timeSpent;

    int nbrRead = fscanf( fp, "%s %d %d" , name , &timeArrive, &timeSpent);
    if (nbrRead==3){
        pCustomer->_name = name;
        pCustomer->_arrival = timeArrive;
        pCustomer->_timeSpent = timeSpent;
        return true;
    }
    return false;
}

void increaseValue(int &theTime, int newTime){
    assert( newTime>= theTime );
    theTime = newTime;
}


//TODO implementera simulatorn!
void simulate(int antalKassor){

    cout << "--- antal Kassor " << antalKassor << " -------------------\n";

    FILE *fp = fopen("../../Chap8/System/customers.txt", "r");

    Customer customer;
    priority_queue<Event, vector<Event>, AWorseThanB> que;


    // nedanstående kod är felaktig/ofullständig

    while (didReadCustomer(fp, (&customer)) ){

        cout << timestring( customer._arrival ) << endl;




    }



    fclose(fp);

}




void studentSystemSimulator(){


    for (int kassor = 1; kassor <=20 ; kassor +=1)
        simulate(kassor);

}



/********************************************************************************************

  GE resultatet här!


  för antalKasor=1..20


TODO

********************************************************************************************/
