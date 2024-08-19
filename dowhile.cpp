#include <iostream>

int main() {
    int number;

    do {
        std::cout << "Enter a number (negative number to exit): ";
        std::cin >> number;

        if (number >= 0) {
            if (number % 2 == 0) {
                std::cout << "Even" << std::endl;
            } else {
                std::cout << "Odd" << std::endl;
            }
        }
    } while (number >= 0);

    return 0;
}
