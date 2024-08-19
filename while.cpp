#include <iostream> 

int main() {
    
    std::string input;

    while (input != "quit") {
        std::cout << "Enter a string: ";
        std::cin >> input;
        std::cout << "You entered: " << input << std::endl;
    }

    return 0;
}