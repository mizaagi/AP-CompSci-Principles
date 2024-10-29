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
    int            sort;
};

vector<Assignment> sort(vector<Assignment> sortVect, string sortType) {
    vector<Assignment> newVect;
    
    return sortVect;
}

string format(Assignment a) {
    string s;
    for (vector<string>::const_iterator i = a.tags.begin(); i != a.tags.end(); ++i)
        s += *i + "|";
    return a.name + " - due " + a.duedate + " - " + a.priority + " priority, tags:" + s + "\n";
}