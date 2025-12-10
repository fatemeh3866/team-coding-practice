#include<unordered_map>
#include"Participant.h"
#include"Event.h"
using namespase std;
class Manager {
private:
	unordered_map<int,Participant> participant;
	unordered_map<int,Event> event;
public:
	Event& findEvent(int ei);
	Participant& findParticipant(int pi);
	void addEvent(Event& e);
	void addParticipant(Participant& p);
	bool registerParticipantToEvent(int pi, int ei);
	void listEventsSortedByType();
	void listEventsSortedByParticipantCount();
};