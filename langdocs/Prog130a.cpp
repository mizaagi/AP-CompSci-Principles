#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    int steps = 0;
    while (n != 1) {
        if (n % 2 == 0) {
            cout << n << " is even, so I take half = ";
            n /= 2;
            cout << n << endl;
        } else {
            cout << n << " is odd, so I make 3n+1 = ";
            n *= 3;
            n++;
            cout << n << endl;
        }
        steps++;
    }
    cout << "This process took " << steps << " steps to reach 1.";
}