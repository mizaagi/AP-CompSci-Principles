#include <iostream>
#include <fstream>
#include "library.hpp"
using namespace std;

int main() {
    string command;
    string nTag;
    vector<Assignment> assignments;
    while (true) {
        cout << "(new [n], change priority [p], view [v]) : ";
        cin >> command;
        if (command == "n") {
            struct Assignment newAssignment;
            cout << "Enter assignment name: ";
            cin >> newAssignment.name;
            cout << endl << "Enter creation date in format MM/DD/YYYY: ";
            cin >> newAssignment.creationdate;
            cout << endl << "Enter due date in format MM/DD/YYYY: ";
            cin >> newAssignment.duedate;
            cout << "Enter priority: ";
            cin >> newAssignment.priority;
            cout << "Enter tag (x for exit): ";
            while (nTag != "x") {
                cin >> nTag;
                if (nTag != "x") newAssignment.tags.push_back(nTag);
                cout << "Enter tag (x for exit): ";
            }
            assignments.push_back(newAssignment);
            cout << endl << "New Assignment created.";
        } else if (command == "v") {
            for (Assignment assignment : assignments) {
                cout << format(assignment);
            }
        }
    }
}