#include <iostream>
#include <cmath>
using namespace std;

int main() {
    cout << "Num1\tResult\n";
    for (int x = -12; x <= 16; x++) {
        cout << x << "\t" << ((pow(x,6))-(3*pow(x, 5))-(93*pow(x, 4))+(87*pow(x, 3))+(1596*pow(x, 2))-(1380*x)-2800) << endl;
    }
}