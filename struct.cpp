#include <iostream>

struct student {
    std::string name;
    int roll;
    float marks;
};

int main() {

    student s;
    std::cout << "Enter information," << std::endl;
    std::cout << "Enter name: ";
    std::getline(std::cin, s.name);
    std::cout << "Enter roll number: ";
    std::cin >> s.roll;
    std::cout << "Enter marks: ";
    std::cin >> s.marks;

    std::cout << "\nDisplaying Information," << std::endl;
    std::cout << "Name: " << s.name << std::endl;
    std::cout << "Roll: " << s.roll << std::endl;
    std::cout << "Marks: " << s.marks << std::endl;

    student s1 = {"John", 1, 98.5};
    std::cout << "\nDisplaying Information," << std::endl;
    std::cout << "Name: " << s1.name << std::endl;
    std::cout << "Roll: " << s1.roll << std::endl;
    std::cout << "Marks: " << s1.marks << std::endl;

    return 0;
}