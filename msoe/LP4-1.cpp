#include <iostream>
using namespace std;

int main() {
    cout << "Enter # of copies: " << endl;
    int copies = 0;
    cin >> copies;
    float price = 0;
    if (copies >= 0 && copies <= 99) {
        price = 0.3 * copies;
    } else if (copies >= 100 && copies <= 499) {
        price = 0.28 * copies;
    } else if (copies >= 500 && copies <= 749) {
        price = 0.27 * copies;
    } else if (copies >= 750 && copies <= 1000) {
        price = 0.26 * copies;
    } else if (copies >= 1000) {
        price = 0.25 * copies;
    }
    cout << "The total price is $" << price << "." << endl;
}