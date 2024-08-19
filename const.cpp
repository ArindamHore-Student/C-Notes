 #include <iostream>

 int main() {

    const double pi = 3.14159;
    // pi = 3.14; // Error: assignment of read-only variable 'pi'
    int radius = 5;

    double area = pi * radius * radius;
    
    std::cout << "Area of the circle is: " << area << std::endl;
    return 0;

 }