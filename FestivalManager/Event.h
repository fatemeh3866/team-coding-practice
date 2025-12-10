#include<string>
#include<vector>
class Event {
private:
	static int count;
	int eventID;
    string eventName;
	string eventType;
	int capacity;
	vector<int> registeredParticipants;
public:
	Event(string n,string t, int c);
	void addparticipant(int i);
	int setID(int a);
	int getID();
    int participant_count() {return registeredParticipants.size();}
    int getCapacity() {return this->capacity;}
    string getEventType() {return this->eventType;}
};