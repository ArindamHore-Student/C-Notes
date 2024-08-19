/*
double getTotal(int arr[]);

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    double total = getTotal(arr);
    std::cout << "Total: " << total << std::endl;
    return 0;
}

double getTotal(int arr[]) {
    double total = 0;
    for (int i : arr) {
        total += i;
    }
    return total;
}
*/
#include <iostream>

// Function declaration
double getTotal(int arr[], int size);

int main() {
    int arr[] = {1, 2, 3, 4, 5}; // Array declaration and initialization
    double total = getTotal(arr, 5); // Function call with array and its size
    std::cout << "Total: " << total << std::endl; // Output the total
    return 0;
}

// Function definition
double getTotal(int arr[], int size) {
    double total = 0;
    for (int i = 0; i < size; i++) { // Loop through the array using the size
        total += arr[i]; // Add each element to the total
    }
    return total; // Return the total sum
}
