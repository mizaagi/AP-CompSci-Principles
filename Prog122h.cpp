#include <iostream>
#include <cmath>
using namespace std;

int main() {
    cout << "Number\tSquare\tSquare Root\tCube\t4th Root" << endl;
    for (int x = 1; x <= 20; x++) {
        cout << x << "\t" << pow(x,2) << "\t" << sqrt(x) << "\t\t" << pow(x, 3) << "\t" << pow(x, 0.25) << endl;
    }
}