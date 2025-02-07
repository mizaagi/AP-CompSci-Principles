#include <iostream>
using namespace std;

int main() {
    int a = 29;
    int b = 15;
    int c;
    c = a & b;
    cout << c << endl;
    c = a | b;
    cout << c << endl;
    c = a ^ b;
    cout << c << endl;
    c = ~a;
    cout << c << endl;
    c = a << 2;
    cout << c << endl;
    c = b >> 2;
    cout << c << endl;

    int x = 0b11001010;
    x &= 0b11000010;
    cout << x << endl;
    x |= 0b00000100;
    cout << x << endl;
    x ^= 0b01000000;
    cout << x << endl;
    x &= 0b00011100;
    int y = x >> 2;
    cout << y << endl;

    int m = 5;
    int n = 9;
    int packed = (n << 8) | m;
    cout << packed << endl;



}