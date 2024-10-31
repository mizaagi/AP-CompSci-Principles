#include <iostream>

bool isPrime(int num) {
    if (num == 2) return true;
    else if (num == 1 || num == 0) return false;
    for (int i = 3; i < num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int num2Check;
    std::cout << "Enter number: ";
    std::cin >> num2Check;
    if (isPrime(num2Check)) {
        std::cout << num2Check << " is prime.";
    } else std::cout << num2Check << " is not prime.";
}