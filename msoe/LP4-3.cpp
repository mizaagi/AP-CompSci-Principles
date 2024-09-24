#include <iostream>
using namespace std;

double getTotal(double x, int dozens, int spares) {
    double newTotal = (dozens * x) + (spares * (x / 12));
    cout << "The total price is $" << newTotal << "!" << endl;
    return newTotal;
}

int main() {
    int eggs = 0;
    cout << "Enter the number of eggs you are purchasing: ";
    cin >> eggs;
    int dozens = eggs / 12;
    int spares = eggs % 12;
    double price = 0.0;
    double total = 0.0;

    if (eggs >= 0 && eggs < 48) {
        total = getTotal(0.5, dozens, spares);
    } else if (eggs >= 48 && eggs < 72) {
        total = getTotal(0.45, dozens, spares);
    } else if (eggs >= 72 && eggs < 132) {
        total = getTotal(0.4, dozens, spares);
    } else if (eggs >= 132) {
        total = getTotal(0.35, dozens, spares);
    }
}