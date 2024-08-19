#include <iostream>

void bakePizza();
void bakePizza(std::string topping);
void bakePizza(std::string topping1, std::string topping2);

int main() {
    bakePizza();
    bakePizza("Pepperoni");
    bakePizza("Pepperoni", "Mushrooms");
    return 0;
}

void bakePizza() {
    std::cout << "Baking a plain pizza" << std::endl;
}

void bakePizza(std::string topping) {
    std::cout << "Baking a pizza with " << topping << std::endl;
}

void bakePizza(std::string topping1, std::string topping2) {
    std::cout << "Baking a pizza with " << topping1 << " and " << topping2 << std::endl;
}