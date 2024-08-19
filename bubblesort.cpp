#include <iostream> // for std::cout, std::cin

int main() {

    int numbers[] = {9, 5, 7, 3, 6, 2, 8, 1, 4};
    int n = sizeof(numbers) / sizeof(numbers[0]);

    std::cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;
    int temp;

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (numbers[j] > numbers[j + 1]) {
                temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }

    std::cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
