#include <iostream>
using namespace std;

int main() {
    
    int *pointer = nullptr;
    int x = 10;

    // pointer = &x;

    if(pointer != nullptr) {
        cout << "Pointer is not null" << endl;
        cout << "Value of x: " << *pointer << endl;
        cout << "Address of x: " << pointer << endl;
    } else {
        cout << "Pointer is null" << endl;
        cout << "Value of x: " << *pointer << endl; // Segmentation fault
        cout << "Address of x: " << pointer << endl;
    }

    return 0;
}