#include <iostream>
int main() {

    std::cout << "Size of char: " << sizeof(char) << " byte" << std::endl;
    std::cout << "Size of int: " << sizeof(int) << " bytes" << std::endl;
    std::cout << "Size of float: " << sizeof(float) << " bytes" << std::endl;
    std::cout << "Size of double: " << sizeof(double) << " bytes" << std::endl;

    std::string name1 = "John";
    std::string name2 = "Paula";
    std::cout << "Size of name1: " << sizeof(name1) << " bytes" << std::endl;
    std::cout << "Size of name2: " << sizeof(name2) << " bytes" << std::endl;

    std::string names_string[] = {"John", "Paul", "George", "Ringo", "Pete"};
    int names_int[] = {1, 2, 3, 4, 5};
    std::cout << "Size of names: " << sizeof(names_int) << " bytes" << std::endl;
    std::cout << "Size of names: " << sizeof(names_string) << " bytes" << std::endl;

    return 0;
}