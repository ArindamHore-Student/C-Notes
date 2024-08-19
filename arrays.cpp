#include <iostream>
int main() {

    std::string names[] = {"John", "Paul", "George", "Ringo", "Pete"};
    std::cout << names; // This will print the memory address of the array
    for (int i = 0; i < 5; i++) {
        std::cout << names[i] << std::endl; // This will print the names
    }

    // This will take 10 numbers from the user and store them in an array
    int nums[10];
    for (int i = 0; i < 10; i++) {
        std::cout << "Enter a number: ";
        std::cin >> nums[i];
    }

    return 0;
}