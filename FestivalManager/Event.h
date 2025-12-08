#include<string>
#include<vector>
class Event {
private:
	static count;
	int eventID;
public:
	Event(string n,string t);
	string eventName;
	string eventType;
	int capacity;
	vector<int> registeredParticipants;
	void addparticipant(int i);
	int setID(int a);
	int getID();
};