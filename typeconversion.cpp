#include <iostream>
int main() {
    //Implicit type conversion
    int a = 10;
    float b = 20.5;
    float c = a + b;
    std::cout << "c = " << c << std::endl;

    //Explicit type conversion
    int d = 10;
    float e = 20.5;
    int f = d + (int)e;
    std::cout << "f = " << f << std::endl;
    
    return 0;
}