#include <iostream>
#include <fstream>
#include "library.hpp"
using namespace std;

int main() {
    string command;
    string nTag;
    vector<Assignment> assignments;
    while (true) {
        cout << "Commands: new [n], change priority [p], view [v] : ";
        cin >> command;
        if (command == "n" || command == "new") {
            struct Assignment newAssignment;
            cout << "Enter assignment name: ";
            cin  >> newAssignment.name;
            cout << "Enter creation date in format MM/DD/YYYY: ";
            cin  >> newAssignment.creationdate;
            cout << "Enter due date in format MM/DD/YYYY: ";
            cin  >> newAssignment.duedate;
            cout << "Enter priority: ";
            cin  >> newAssignment.priority;
            cout << "Enter tag (x for exit): ";
            while (nTag != "x") {
                cin >> nTag;
                if (nTag != "x") {
                    newAssignment.tags.push_back(nTag);
                } else break;
                cout << "Enter tag (x for exit): ";
            }
            assignments.push_back(newAssignment);
            cout << endl << "New Assignment created." << endl;
        } else if (command == "v" || command == "view") {
            string method;
            cout << "Enter sort method (creation date [c], due date [d], name [n], priority [p]): ";
            cin >> method;
            if (method == "c") {
                for (Assignment a : sort(assignments, "cd")) {
                    cout << format(a);
                }
            }
        }
    }
}