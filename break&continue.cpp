#include <iostream>

int main() {
    int number;
    // break statement
    while (true) {
        std::cout << "Enter a number (negative number to exit): ";
        std::cin >> number;

        if (number < 0) {
            break;
        }

        if (number % 2 == 0) {
            std::cout << "Even" << std::endl;
        } else {
            std::cout << "Odd" << std::endl;
        }
    }

    // continue statement
    for (int i = 0; i < 10; i++) {
        if (i % 2 == 0) {
            continue;
        }
        std::cout << i << std::endl;
    }
    
    return 0;
}