#include <iostream>
#include <cmath>
using namespace std;

int main() {
    cout << "Enter number 1: ";
    int num1;
    cin >> num1;
    cout << "Enter number 2: ";
    int num2;
    cin >> num2;
    int sum = (num1+num2);
    int dif = (num1-num2);
    int prod = (num1*num2);
    int quot = (num1/num2);
    int dist = abs(num1-num2);
    int max = (abs(num1-num2) + num1 + num2);
    cout << "Sum: " << sum << endl;
    cout << "Difference: " << dif << endl;
    cout << "Product: " << prod << endl;
    cout << "Quotient: " << quot << endl;
    cout << "Distance: " << dist << endl;
    cout << "Maximum: " << max << endl; // does not work
}