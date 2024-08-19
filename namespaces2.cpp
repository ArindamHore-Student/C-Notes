#include <iostream>

int main() {
    
    // using namespace std; // initialize the std namespace with all its members
    using std::string; // initialize only the string namespace with all its members
    using std::cout; // initialize only the cout namespace with all its members

    cout << "Hello, World!" << std::endl;

    string name = "John";
    cout << "Hello, " << name << "!" << std::endl;

    return 0;
}