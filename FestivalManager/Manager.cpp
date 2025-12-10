#include "Manager.h"
using namespace std;
Event& Manager::findEvent(int ei) {
	auto it = event.find(ei);
	   if (it != event.end()) {
		   return it->second;
	   }
   throw EventException("The Event not found!");
};
Participant& Manager::findParticipant(int pi) {
	auto it = participant.find(pi);
		if (it != participant.end()) {
			return it->second;
		}
	throw ParticipantException ("The Participant not found!");
};
void Manager::addEvent(Event& e) {
	Event::eventID id = e.getID();
	event.insert({ id, e });
};
void Manager::addParticipant(Participant& p) {
	Participant::participantID id = p.getID();
	participant.insert({id,p});
};


