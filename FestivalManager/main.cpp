#include <iostream>
#include"Manager.cpp"
#include"Manager.h"
#include"Event.cpp"
#include"Event.h"
#include"Participant.cpp"
#include"Participant.h"
using namespace std;
int main() {
    Event e1, e2;
    e1("", "a");
    e2("", "b");
    Participant p1, p2;
    p1("ali");
    p2("sara");
    int pid = p2.getID;
    int eid = e1.getID;
    try {
        e1.addparticipant(int pid);
    }
    catch(const CapacityException& e){
        cout << e.what() << endl;
    }
    Manager manager;
    try {
        manager.findEvent(int eid) {
            auto it = event.find(eid);
            if (it != event.end()) {
                return it->second;
            }
        }
    }
    catch(const EventException& e){ 
        cout << e.what() << endl;
        };
   
        return 0;
}