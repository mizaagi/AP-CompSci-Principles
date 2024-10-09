#include <iostream>
#include <string>
using namespace std;

int main() {
    string source;
    string target;
    int targetCount = 0;
    cout << "Enter source string: ";
    cin >> source;
    cout << endl << "Enter target string: ";
    cin >> target;

    for (int lcv = 0; lcv <= source.length() - target.length(); lcv++) {
        if (source.substr(lcv, target.length()).compare(target) == 0) {
            targetCount++;
        }
    }

    if (targetCount > 0) {
        cout << "The string " << target << " is in the string " << source << "." << endl;
    } else {
        cout << "The string " << target << " is not in the string " << source << "." << endl;
    }
}