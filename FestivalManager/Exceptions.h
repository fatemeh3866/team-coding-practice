#ifndef EXCEPTIONS_H
#define EXCEPTIONS_H
#include <exception>

using namespace std;

class EventException : public exception {
public:
    const char* what() const noexcept override
    {
        return "The Event not found!";
    }
};

class ParticipantException : public exception {
public:
    const char* what() const noexcept override
    {
        return "The Participant not found!";
    }
};

class CapacityException : public exception {
public:
    const char* what() const noexcept override
    {
        return "This event is full!";
    }
};

#endif