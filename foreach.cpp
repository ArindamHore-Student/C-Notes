#include <iostream>
int main() {

    int arr[] = {1, 2, 3, 4, 5};
    for (int i : arr) {
        std::cout << i << std::endl;
    }

    std::string names[] = {"Alice", "Bob", "Charlie"};
    for (std::string name : names) {
        std::cout << name << std::endl;
    }

    return 0;
}