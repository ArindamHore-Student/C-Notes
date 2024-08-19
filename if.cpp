#include <iostream>

int main() {
    int age;
    std::cout << "Enter your age: ";
    std::cin >> age;

    if (age <= 0) {
        std::cout << "You are not born yet!\n";
    } else if (age < 18) {
        std::cout << "You are a minor.\n";
    } else if (age < 65) {
        std::cout << "You are an adult.\n";
    } else {
        std::cout << "You are a senior citizen.\n";
    }

    return 0;
}
