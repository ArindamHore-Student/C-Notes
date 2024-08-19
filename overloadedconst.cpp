#include <iostream>

class Pizza {
    public:
        std::string topping1 = "";
        std::string topping2 = "";

    Pizza() {
        std::cout << "Default constructor called" << std::endl;
    }

    Pizza(std:: string topping1) {
        this->topping1 = topping1;
        std::cout << "Single parameter constructor called" << std::endl;
    }

    Pizza(std::string topping1, std::string topping2) {
        this->topping1 = topping1;
        this->topping2 = topping2;
        std::cout << "Two parameter constructor called" << std::endl;
    }
};

int main() {
    Pizza pizza1;
    Pizza pizza2("Pepperoni");
    Pizza pizza3("Pepperoni", "Sausage");

    return 0;
}