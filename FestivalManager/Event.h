#ifndef EVENT_H
#define EVENT_H

#include<string>
#include<vector>

using namespace std;

class Event {
private:
	int eventID;
    string eventName;
	string eventType;
	int capacity;
	vector<int> registeredParticipants;
public:
    static int count;
	Event(string n,string t, int c);
	void addparticipant(int i);
	int setID(int a);
	int getID();
    int participant_count() const {return registeredParticipants.size();}
    int getCapacity() {return this->capacity;}
    string getEventType() const {return this->eventType;}
};

#endif