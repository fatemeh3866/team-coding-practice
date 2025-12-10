#include <iostream>
#include "Event.h"
#include "Participant.h"
#include "Manager.h"
#include "Exceptions.h"

using namespace std;

int main() {
    Manager manager;
    // ایجاد چند Event
    Event e1("TechTalk", "Conference", 2);
    Event e2("MusicFest", "Concert", 3);
    Event e3("ArtExpo", "Exhibition", 1);

    manager.addEvent(e1);
    manager.addEvent(e2);
    manager.addEvent(e3);

    // ایجاد چند Participant
    Participant p1("Ali");
    Participant p2("Sara");
    Participant p3("Reza");

    manager.addParticipant(p1);
    manager.addParticipant(p2);
    manager.addParticipant(p3);

    manager.registerParticipantToEvent(p1.getID(), e3.getID());
    try
    {
        manager.registerParticipantToEvent(p2.getID(), e3.getID());
    }
    catch(const std::exception& e)
    {
        cerr << e.what() << '\n';
    }

    manager.registerParticipantToEvent(p3.getID(), e2.getID());

    try
    {
        manager.registerParticipantToEvent(p3.getID(), 5);
    }
    catch(const std::exception& e)
    {
        cerr << e.what() << '\n';
    }


    try
    {
        manager.registerParticipantToEvent(8, e3.getID());
    }
    catch(const std::exception& e)
    {
        cerr << e.what() << '\n';
    }

    cout << "\nEvents sorted by participant count:" << endl;
    auto eventsByCount1 = manager.listEventsSortedByParticipantCount();
    for (auto &ev : eventsByCount1) {
        cout << "Event: " << ev.getEventType() << " - Participants: " << ev.participant_count() << endl;
    }
    
    manager.registerParticipantToEvent(p2.getID(), e1.getID());
    manager.registerParticipantToEvent(p1.getID(), e1.getID());

    cout << endl << "Events sorted by type:" << endl;
    auto eventsByType = manager.listEventsSortedByType();
    for (auto &ev : eventsByType) {
        cout << "Event: " << ev.getEventType() << " - Participants: " << ev.participant_count() << endl;
    }

    cout << "\nEvents sorted by participant count:" << endl;
    auto eventsByCount2 = manager.listEventsSortedByParticipantCount();
    for (auto &ev : eventsByCount2) {
        cout << "Event: " << ev.getEventType() << " - Participants: " << ev.participant_count() << endl;
    }

    return 0;
}
