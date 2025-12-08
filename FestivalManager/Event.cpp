#include"Event.h"
#include<vector>
count = 0;
Event::Event(string n,string t){
	eventID = count;
	eventName = n;
	eventType = t;
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