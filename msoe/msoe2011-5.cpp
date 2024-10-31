#include <iostream>
#include <cmath>
using namespace std;

double f(double x) {
    return (-0.09 * pow(x, 6)) + (1.6108 * pow(x, 5)) +
           (-10.9167 * pow(x, 4)) + (34.7625 * pow(x, 3)) + 
           (-52.0433 * pow(x, 2)) + (31.1767 * x) + (-4);
}

double fprime(double x) {
    return (6 * -0.09 * pow(x, 5)) + (5 * 1.6108 * pow(x, 4)) +
           (4 * -10.9167 * pow(x, 3)) + (3 * 34.7625 * pow(x, 2)) + 
           (2 * -52.0433 * x) + (31.1767);
}

int main() {
    cout << "Enter your guess: ";
    double guess;
    cin >> guess;
    double x = f(guess);
    cout << "f(" << guess << ") = " << x << endl;
    while (abs(x) >= 0.001) {
        guess = guess - (f(guess) / fprime(guess)); 
        x = f(guess);
        cout << "f(" << guess << ") = " << x << endl;
    }
}
