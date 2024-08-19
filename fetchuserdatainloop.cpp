#include <iostream>

int main() {

    int size;
    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    std::string foods[size];
    for (int i = 0; i < size; i++) {
        std::cout << "Enter your favorite food: ";
        std::getline(std::cin, foods[i]);
        
    }

        return 0;
}