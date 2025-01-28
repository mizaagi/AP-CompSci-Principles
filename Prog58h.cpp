#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double P;
    double r;
    double n;
    double t;

    cout << "P: ";
    cin >> P;
    cout << "r: ";
    cin >> r;
    cout << "n: ";
    cin >> n;
    cout << "t: ";
    cin >> t;
    double A = P * (pow((1 + (0.01*r)/n), (n*t)/365));
    cout << "A = " << A << endl;
}