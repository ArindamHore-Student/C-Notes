#include <iostream>

int main() {

    int x;
    std::cout << "Enter a number: ";
    std::cin >> x;

    std::cout << (x % 2 == 0 ? "Even" : "Odd") << std::endl;

    return 0;
}