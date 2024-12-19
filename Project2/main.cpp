#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <map>
#include "library.hpp"
using namespace std;

int main() {
    vector<string> letters; 
    string type;
    string input;
    map<string, string> m;
    m = initMap(m);
    while (true) {
        cout << "Morse code or plain text input? \n";
        cin >> type;
        if (type == "t") {
            cout << "Enter text: ";
            std::cin.ignore();
            getline(cin, input);
            cout << toMorse(input, m);
        } else {
            cout << "Enter morse code, divided by |'s: ";
            std::cin.ignore();
            getline(cin, input);
            cout << toText(input, m);
        }
    }
}

