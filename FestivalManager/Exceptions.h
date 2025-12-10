#ifndef EXCEPTIONS_H
#define EXCEPTIONS_H
#include <exception>

using namespace std;

class EventException : public exception {
    const char* what() noexcept override
    {
        return "The Event not found!";
    }
};

class ParticipantException : public exception {
    const char* what() noexcept override
    {
        return "The Participant not found!"
    }
};

class CapacityException : public exception {
    const char* what() noexcept override
    {
        return "This event is full!"
    }
};

#endif