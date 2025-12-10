#include "Participant.h"

int Participant::counter = 0;

Participant::Participant(const string &n) : name(n) {
    this->participantID = counter;
    counter++;
}

void Participant::AddInEvent(int id)
{
    this->registeredEvents.push_back(id);
}
int Participant::getID() {
    return participantID;
}