#include <iostream>
#include <vector>

typedef std::vector<int> vi; // Alternative: using vi = std::vector<int>;
typedef std::vector<std::pair<std::string, vi>> pairlist_t; // Alternative: using pairlist_t = std::vector<std::pair<std::string, vi>>;
typedef std::string text_t; // Alternative: using text_t = std::string;
typedef int number_t; // Alternative: using number_t = std::int;

int main() {
    
    text_t firstName = "John";
    number_t age = 21;

    pairlist_t people = {
        {"John", {21, 1, 1999}},
        {"Jane", {22, 2, 1998}},
        {"Joe", {23, 3, 1997}}
    };

    std::cout << "Hello, " << firstName << "!" << std::endl;
    std::cout << "You are " << age << " years old." << std::endl;

    return 0;


}