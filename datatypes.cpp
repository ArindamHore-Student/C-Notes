#include <iostream>

int main() {
    int x; // declaration
    x = 5; // initialization
    std::cout << x << std::endl;

    int y = 6; // declaration + initialization
    int sum = x + y;
    std::cout << sum << std::endl;

    int days = 7.6; // truncates value
    std::cout << days << std::endl;

    // double datatype
    double price = 10.96;
    double gpa = 2.5;
    std::cout << price << std::endl;
    std::cout << gpa << " is the final GPA" << std::endl;

    //character datatype
    char grade = 'A';
    char initial = 'X';
    char currency = '$';
    // char error = 'XD'; -> Error : overflow in conversion from 'int' to 'char' changes value from '22596' to '68' [-Woverflow]gcc
    std::cout << grade << std::endl;
    std::cout << initial << std::endl;
    std::cout << currency << std::endl;

    //boolean (true or false)
    bool student = false;
    bool light_is_on = 1;

    std::cout << student << std::endl; 
    std::cout << light_is_on << std::endl;
    // boolean values are treated as numeric values of 0 and 1 respectively

    std::string name = "John Doe";
    std::cout << name << std::endl;
    std::string message = "Hello, " + name;
    std::cout << message << std::endl;
    // string is an object that represents a sequence of characters

    return 0;
}