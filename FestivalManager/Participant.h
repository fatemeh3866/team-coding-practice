#ifndef PARTICIPANT_H
#define PARTICIPANT_H
#include <string>
#include <vector>

using namespace std;

class Participant {
private:
    string name;
    static int counter;
    int participantID;
    vector<int> registeredEvents;

public:
    Participant(string &n);
    string GetName() {return this->name; }
    string SetName(string nm) {this->name = nm;}
    void AddInEvent(int id);
};


#endif 