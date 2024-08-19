#include <iostream>
using namespace std;

int main() {

    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    string foods[size];
    fill(foods, foods + size/2, "Pizza");
    fill(foods + size/2, foods + size, "Burger");

    for (int i = 0; i < 100; i++) {
        cout << foods[i] << endl;
    }

    return 0;

}