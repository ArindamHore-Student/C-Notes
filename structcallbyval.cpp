#include <iostream>

struct car {
    int year;
    std::string make;
    std::string model;
    std::string color;
};

void printCar(car c) {
    std::cout << "Year: " << c.year << std::endl;
    std::cout << "Make: " << c.make << std::endl;
    std::cout << "Model: " << c.model << std::endl;
    std::cout << "Color: " << c.color << std::endl;
}

void paintCar(car c, std::string color) { // call by value i.e. a copy of the struct is passed
    std::cout << "Painting the car " << color << std::endl;
    c.color = color;
}

int main() {
    car myCar = {2010, "Toyota", "Corolla","Blue"};
    printCar(myCar);
    paintCar(myCar, "Red"); // paintCar() will not change the color of myCar
    printCar(myCar);
    return 0;
}