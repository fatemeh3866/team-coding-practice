#include<unordered_map>
#include"Participant.h"
#include"Event.h"
#include "Exceptions.h"
#include <algorithm>
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
	void registerParticipantToEvent(int pi, int ei);
	vector<Event> listEventsSortedByType();
	vector<Event> listEventsSortedByParticipantCount();
};