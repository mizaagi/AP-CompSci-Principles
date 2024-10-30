#include <vector>
#include <string>
using namespace std;

typedef struct date {
    int year;
    int month;
    int day;
};

typedef struct Assignment {
    vector<string> tags;
    string         name;
    string     priority;
    string creationdate;
    string      duedate;
    int              id;
    int            sort;
};

date getInfo(Assignment a) {
    struct date newDate;
    newDate.year = stoi(a.duedate.substr(6, 4));
    newDate.month = stoi(a.duedate.substr(3, 1)) * 10 + stoi(a.duedate.substr(4,1));
    newDate.day = stoi(a.duedate.substr(0,1)) * 10 + stoi(a.duedate.substr(1,1));
    return newDate;
}



vector<Assignment> sort(vector<Assignment> sortVect, string sortType) {
    vector<Assignment> newVect;
    newVect.push_back(sortVect[0]);
    for (int lcv = 1; lcv < sortVect.size(); lcv++) {
        date date1 = getInfo(sortVect[lcv]);
        date date2 = getInfo(sortVect[lcv-1]);
        int year = date1.year;
        int month = date1.month;
        int day = date1.day;
        int year2 = date2.year;
        int month2 = date2.month;
        int day2 = date2.day;

        if (year < year2 || (year == year2 && month < month2) || (year == year2 && month == month2 && day <= day2)) {
            newVect.insert(newVect.begin() + lcv-1, sortVect[lcv]);
        } else newVect.push_back(sortVect[lcv]);
    }
    return newVect;
}

string format(Assignment a) {
    string s;
    for (vector<string>::const_iterator i = a.tags.begin(); i != a.tags.end(); ++i) // Stolen code :(
        s += *i + "|";
    return a.name + " - due " + a.duedate + " - " + a.priority + " priority, tags:" + s + "\n";
}