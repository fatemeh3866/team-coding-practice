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
    Participant(const string &n);
    int getID();
    string GetName() {return this->name; }
    void SetName(string nm) {this->name = nm;}
    void AddInEvent(int id);
};


#endif 