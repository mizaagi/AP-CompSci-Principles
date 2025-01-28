#include <iostream>
#include <cmath>
using namespace std;

int main() {
    cout << "Enter first time: ";
    int time1;
    cin >> time1;
    cout << "Enter second time: ";
    int time2;
    cin >> time2;
    int dif = abs(time1 - time2); // abs(815 - 900) = 85
    int hrs = 0;
    int mins = 0;
    while (dif >= 100) {
        dif -= 100;
        hrs += 1;
    }
    if (dif >= 60) {
        mins = dif - 40;
    } else {
        mins = dif;
    }
    
    cout << hrs << " hours and " << mins << " minutes";
}