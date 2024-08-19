#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int *p = &a;
    cout << "Value of a: " << a << endl; // returns value of a
    cout << "Address of a: " << &a << endl; // returns address of a
    cout << "Value of p: " << p << endl; // returns address of a
    cout << "Address of p: " << &p << endl; // returns address of p
    cout << "Value at address p: " << *p << endl; // returns value of a
    return 0;
}