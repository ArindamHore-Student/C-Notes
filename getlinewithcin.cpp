#include <iostream>
#include <string>
#include <limits> // Add this line to include the <limits> header file

// Using std::cin.ignore() to clear the newline character
int main() {
    int number;
    std::string name;

    std::cout << "Enter a number: ";
    std::cin >> number;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Clear the newline character

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    std::cout << "Number: " << number << ", Name: " << name << std::endl;
    return 0;
}

// Using std::cin >> std::ws to clear the newline character
/*
#include <iostream>
#include <string>

int main() {
    int number;
    std::string name;

    std::cout << "Enter a number: ";
    std::cin >> number;

    std::cout << "Enter your name: ";
    std::getline(std::cin >> std::ws, name); // Clear the newline character

    std::cout << "Number: " << number << ", Name: " << name << std::endl;
    return 0;
}
*/