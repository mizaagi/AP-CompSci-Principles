#include <vector>
#include <string>
using namespace std;

typedef struct Assignment {
    vector<string> tags;
    string         name;
    string     priority;
    string creationdate;
    string      duedate;
    int              id;
};

string format(Assignment a) {
    string fAssignment = a.name + " - due " + a.duedate + " - " + a.priority + " priority "  + "\n";
    return fAssignment;
}