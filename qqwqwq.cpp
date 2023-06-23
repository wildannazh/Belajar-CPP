#include <iostream>
using namespace std;
bool isPrime(int number) {
    if (number <= 1) {
        return false;
    }

    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int number;
    std::cout << "Masukkan sebuah bilangan: ";
    std::cin >> number;

    if (isPrime(number)) {
        std::cout << number << " adalah bilangan prima." << std::endl;
    } else {
        std::cout << number << " bukan bilangan prima." << std::endl;
    }

    return 0;
}

