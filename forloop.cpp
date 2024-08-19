#include <iostream>

int main() {
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;

    for (int i = 0; i < n; i++) {
        std::cout << i << std::endl;
    }

    return 0;
}