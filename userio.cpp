#include <iostream>

int main() {

    // User IO
    int a;
    std::cout << "Enter a number: ";
    std::cin >> a;
    std::cout << "You entered: " << a << std::endl;

    // User IO with strings
    std::string name;
    std::cout << "Enter your name: ";
    std::cin >> name;
    std::cout << "Hello, " << name << std::endl;

    // User IO with multiple strings
    std::string first_name, last_name;
    std::cout << "Enter your first name: ";
    std::cin >> first_name;
    std::cout << "Enter your last name: ";
    std::cin >> last_name;
    std::cout << "Hello, " << first_name << " " << last_name << std::endl;

    // User IO with multiple strings using getline
    std::string full_name;
    std::cout << "Enter your full name: ";
    std::getline(std::cin, full_name);
    std::cout << "Hello, " << full_name << std::endl;

    // User IO with numbers
    int x, y;
    std::cout << "Enter two numbers: ";
    std::cin >> x >> y;
    std::cout << "The sum of " << x << " and " << y << " is " << x + y << std::endl;

    

    return 0;

}