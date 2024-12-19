#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <map>
#include "library.hpp"
using namespace std;

int main() {
    string type;
    string input;
    map<string, string> m;
    m = initMap(m);
    while (true) {
        cout << "Morse code or plain text input? (m/t) \n";
        cin >> type;
        if (type == "t" || type == "text") {
            cout << "Enter text: ";
            std::cin.ignore();
            getline(cin, input);
            cout << "Morse code: " << toMorse(input, m) << endl;
        } else {
            cout << "Enter morse code, divided by |'s: ";
            std::cin.ignore();
            getline(cin, input);
            cout << "Text: " << toText(input, m) << endl;
        }
    }
}

