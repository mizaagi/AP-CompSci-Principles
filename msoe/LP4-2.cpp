#include <iostream>
using namespace std;

int main() {
    cout << "Enter weight in kg: ";
    double weight;
    cin >> weight;
    cout << "Enter length in cm: ";
    double length;
    cin >> length;
    cout << "Enter width in cm: ";
    double width;
    cin >> width;
    cout << "Enter height in cm: ";
    double height;
    cin >> height;
    double volume = length * width * height;

    if (volume > 100000 && weight > 27) {
        cout << "Package is too heavy and too large.";
    } else if (volume > 100000) {
        cout << "Package is too large.";
    } else if (weight > 27) {
        cout << "Package is too heavy.";
    } else {
        cout << "Success!" << endl;
    }
}