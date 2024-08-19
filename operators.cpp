#include <iostream>

int main() {

    int a = 10;
    int b = 20;

    // Arithmetic operators
    std::cout << "a + b = " << a + b << std::endl;
    std::cout << "a - b = " << a - b << std::endl;
    std::cout << "a * b = " << a * b << std::endl;
    std::cout << "a / b = " << a / b << std::endl;
    std::cout << "a % b = " << a % b << std::endl;

    // Relational operators
    std::cout << "a == b = " << (a == b) << std::endl;
    std::cout << "a != b = " << (a != b) << std::endl;
    std::cout << "a > b = " << (a > b) << std::endl;
    std::cout << "a < b = " << (a < b) << std::endl;
    std::cout << "a >= b = " << (a >= b) << std::endl;
    std::cout << "a <= b = " << (a <= b) << std::endl;

    // Logical operators
    bool c = true;
    bool d = false;
    std::cout << "c && d = " << (c && d) << std::endl;
    std::cout << "c || d = " << (c || d) << std::endl;
    std::cout << "!c = " << !c << std::endl;

    // Bitwise operators
    int e = 5; // 101
    int f = 3; // 011
    std::cout << "e & f = " << (e & f) << std::endl; // 001
    std::cout << "e | f = " << (e | f) << std::endl; // 111
    std::cout << "e ^ f = " << (e ^ f) << std::endl; // 110
    std::cout << "~e = " << ~e << std::endl; // 11111111111111111111111111111010

    // Assignment operators
    int g = 10;
    g += 5;
    std::cout << "g = " << g << std::endl;

    // Conditional(Ternary) operators
    int h = 10;
    int i = 20;
    int j = (h > i) ? h : i;
    std::cout << "j = " << j << std::endl;

    // Unary operators
    int k = 10;
    std::cout << "k++ = " << k++ << std::endl;
    
    return 0;
}