#include"Event.h"
#include<vector>
int Event::count = 0;
Event::Event(string n,string t, int c){
	eventID = count;
	eventName = n;
	eventType = t;
    capacity = c;
	count++;
}
int Event::setID(int a) {
	eventID = a;
	return eventID;
}
int Event:: getID() {
	return eventID;
}
void Event::addparticipant(int i) {
	this->registeredParticipants.push_back(i);
}