#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <iostream>
using namespace std;

int main() {
    double radius;
    const double PI = 3.14159;
    cout << "\nEnter radius: ";
    cin >> radius;
    cout << "Area: " << PI*pow(radius, 2) << "\nCircumference: " << 2*PI*radius << endl;
}