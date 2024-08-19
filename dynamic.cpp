#include <iostream>

int main() {

    int *pNum = NULL;

    // std::cout << "pNum: " << *pNum << std::endl; // Segmentation fault
    std::cout << "Size of pNum: " << sizeof(pNum) << std::endl;
    std::cout << "Address of pNum: " << &pNum << std::endl;

    pNum = new int;

    *pNum = 42;

    std::cout << "pNum: " << *pNum << std::endl;
    std::cout << "Size of pNum: " << sizeof(pNum) << std::endl;
    std::cout << "Address of pNum: " << &pNum << std::endl;

    delete pNum;

    char *pGrades = NULL;
    int size;

    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    pGrades = new char[size];

    for (int i = 0; i < size; i++) {
        std::cout << "Enter grade " << i + 1 << ": ";
        std::cin >> pGrades + i;
    }

    for (int i = 0; i < size; i++) {
        std::cout << "Grade " << i + 1 << ": " << *(pGrades + i) << std::endl;
    }

    delete[] pGrades;

    return 0;
}