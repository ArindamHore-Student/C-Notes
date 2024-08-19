#include <iostream>

int factorial(int n);

int main() {

    int n;

    std::cout << "Enter a number: ";
    std::cin >> n;

    std::cout << factorial(n);
    return 0;
}

int factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}
