#include <iostream>
using namespace std;

void swap(int x, int y) {

    int temp = x;
    x = y;
    y = temp;
    cout << "Memory address of x: " << &x << endl;
    cout << "Memory address of y: " << &y << endl;

}

int main() {
    int a = 10;
    int b = 20;

    cout << "Memory address of a: " << &a << endl;
    cout << "Memory address of b: " << &b << endl;
    cout << "Before swapping: " << endl;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;

    swap(a, b);

    cout << "After swapping: " << endl;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;

    return 0;
}