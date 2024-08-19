#include <iostream>

enum Day { Monday = 1, Tuesday = 2, Wednesday = 3, Thursday = 4, Friday = 5, Saturday = 6, Sunday = 7 };
enum Flavor { Chocolate, Vanilla, Strawberry, Mint, RockyRoad, CookieDough, ButterPecan }; // Assigns zero indexed values by default

int main() {

    Day today = Monday;
    Day pizzaday = Friday; 

    switch (today) {
        case Monday:
            std::cout << "Today is Monday" << std::endl;
            break;
        case Tuesday:
            std::cout << "Today is Tuesday" << std::endl;
            break;
        case Wednesday:
            std::cout << "Today is Wednesday" << std::endl;
            break;
        case Thursday:
            std::cout << "Today is Thursday" << std::endl;
            break;
        case Friday:
            std::cout << "Today is Friday" << std::endl;
            break;
        case Saturday:
            std::cout << "Today is Saturday" << std::endl;
            break;
        case Sunday:
            std::cout << "Today is Sunday" << std::endl;
            break;
        default:
            std::cout << "Invalid day" << std::endl;
            break;
    }

    switch (pizzaday) {
        case Monday:
            std::cout << "Pizza day is Monday" << std::endl;
            break;
        case Tuesday:
            std::cout << "Pizza day is Tuesday" << std::endl;
            break;
        case Wednesday:
            std::cout << "Pizza day is Wednesday" << std::endl;
            break;
        case Thursday:
            std::cout << "Pizza day is Thursday" << std::endl;
            break;
        case Friday:
            std::cout << "Pizza day is Friday" << std::endl;
            break;
        case Saturday:
            std::cout << "Pizza day is Saturday" << std::endl;
            break;
        case Sunday:
            std::cout << "Pizza day is Sunday" << std::endl;
            break;
        default:
            std::cout << "Invalid day" << std::endl;
            break;
    }

    Flavor favorite = Chocolate;
    std::cout << "My favorite flavor is " << favorite << std::endl;

    return 0;
}