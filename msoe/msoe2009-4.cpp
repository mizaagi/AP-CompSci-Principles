#include <iostream>
#include <string>
#include <cmath>
#include <math.h>
using namespace std;

double f(double x) {
    static const double pi = atan(1.0)*4.0;
    return exp(-x*x/2)/sqrt(2*pi);
}

int main() {
    double a;
    cout << "Enter a: ";
    cin >> a;
    double b;
    cout << "Enter b: ";
    cin >> b;
    double n;
    cout << "Enter n: ";
    cin >> n;

    double h = (b - a) / n;
    double A = 0;
    for (int i = 0; i < n; i++) {
        A += h * f(a + (i * h));
    } 
    cout << "The Riemann sum is equal to " << A << "." << endl;
}