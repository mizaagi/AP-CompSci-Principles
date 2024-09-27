#include <iostream>
#include <cmath>
using namespace std;

int eulerTotient(int n) {
    int result = n;

    // Check for all prime factors from 2 to sqrt(n)
    for (int p = 2; p * p <= n; p++) {
        // If p is a factor of n
        if (n % p == 0) {
            // Divide n by p until it is no longer divisible
            while (n % p == 0) {
                n/= p;
            }
            // Subtract multiples of p from result
            result -= result / p;
        }
    }
    // If n is greater than 1, then it must be a prime factor
    if (n > 1) {
        result -= result / n;
    }
    return result;
}

int main() {
    int n;

    cout << "Enter a number to compute its Euler's totient: ";
    cin >> n;
    cout << "Euler's totient: " << eulerTotient(n) << endl;
}