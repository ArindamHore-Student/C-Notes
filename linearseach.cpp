# include <iostream>

int searchArray(int arr[], int n, int x);

int main() {

    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(numbers) / sizeof(numbers[0]);
    int index;
    int myNum;

    std::cout << "Enter a number to search for: ";
    std::cin >> myNum;

    index = searchArray(numbers, n, myNum);

    if (index != -1) {
        std::cout << myNum << " is at index " << index << std::endl;
    } else {
        std::cout << myNum << " is not in the array." << std::endl;
    }

    str::string food[] = {"apple", "banana", "cherry", "date", "elderberry"};
    int n2 = sizeof(food) / sizeof(food[0]);
    int index2;
    str::string myFood;

    std::cout << "Enter a food to search for: ";
    std::cin >> myFood;

    index2 = searchArray(food, n2, myFood);
    
    if (index2 != -1) {
        std::cout << myFood << " is at index " << index2 << std::endl;
    } else {
        std::cout << myFood << " is not in the array." << std::endl;
    }

    return 0;
}

int searchArray(int arr[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            return i;
        }
    }
    return -1;
}

int searchArray(str::string arr[], int n, str::string x) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            return i;
        }
    }
    return -1;
}