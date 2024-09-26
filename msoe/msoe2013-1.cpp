#include <iostream>
using namespace std;

int main() {
    double r1;
    double r2;
    double r3;
    double v;

    cout << "Enter r1: ";
    cin >> r1;
    cout << "Enter r2: ";
    cin >> r2;
    cout << "Enter r3: ";
    cin >> r3;
    cout << "Enter voltage: ";
    cin >> v;

    double i1 = v / r1;
    double i2 = v / r2;
    double i3 = v / r3;

    double iTotal = i1 + i2 + i3;
    double rTotal = v / iTotal;
    cout << "Total current: " << iTotal << endl;
    cout << "Total resistance: " << rTotal << endl;
    
}