#include "Manager.h"
using namespace std;
Event& Manager::findEvent(int ei) {
	auto it = event.find(ei);
	   if (it != event.end()) {
		   return it->second;
	   }
   throw EventException();
};
Participant& Manager::findParticipant(int pi) {
	auto it = participant.find(pi);
		if (it != participant.end()) {
			return it->second;
		}
	throw ParticipantException ();
};
void Manager::addEvent(Event& e) {
	int id = e.getID();
	event.insert(make_pair(id, e));
};
void Manager::addParticipant(Participant& p) {
	int id = p.getID();
	participant.insert(make_pair(id,p));
};

void Manager::registerParticipantToEvent(int pi, int ei)
{
    Event& e = findEvent(ei);
    Participant& p = findParticipant(pi);

    cout << e.getID() << " " << e.participant_count() << " " << e.getCapacity() << endl;
    
    if (e.participant_count() == e.getCapacity())
    {
        throw CapacityException();
    }

    e.addparticipant(pi);
    p.AddInEvent(ei);
}

vector<Event> Manager::listEventsSortedByType()
{
    vector<Event> res;
    for (auto& ev : event)
    {
        res.push_back(ev.second);
    }

    sort(res.begin(), res.end(), [](const Event& a, const Event& b){return a.getEventType() < b.getEventType();});

    return res;
}

vector<Event> Manager::listEventsSortedByParticipantCount()
{
    vector<Event> res;
    for (auto& ev : event)
    {
        res.push_back(ev.second);
    }

    sort(res.begin(), res.end(), [](const Event& a, const Event& b){return a.participant_count() < b.participant_count();});

    return res;
}