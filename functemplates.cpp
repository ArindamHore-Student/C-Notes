#include <iostream>
using namespace std;

// Function template for adding two values
template <typename T, typename U>
T add(T x, U y) {
    return x + y;
}
/*
// Function template for finding the maximum of three values
template <typename T, typename U, typename V>
auto max(T x, U y, V z) {
    return x > y ? (x > z ? x : z) : (y > z ? y : z);
}
*/
int main() {
    // Using the add function template
    cout << "add(5, 6): " << add(5, 6) << endl;           // Outputs: 11
    cout << "add(5.5, 6.6): " << add(5.5, 6.6) << endl;   // Outputs: 12.1
    /*
    // Using the max function template
    cout << "max(3, 7, 5): " << max(3, 7, 5) << endl;       // Outputs: 7
    cout << "max(3.3, 7.7, 5.5): " << max(3.3, 7.7, 5.5) << endl; // Outputs: 7.7
    */
    return 0;
}
