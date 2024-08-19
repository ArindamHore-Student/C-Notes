#include <iostream>

class Student {
    public:
    
            std::string name = "";
            std::string major = "";
            int age = 0;
            double gpa = 0.0;

            // Constructor
            Student(std::string name, std::string major, int age, double cgpa) {
                this->name = name;
                this->major = major;
                this->age = age;
                gpa = cgpa;
            }
    
            void sayHello() {
                std::cout << "Hello, my name is " << name << " and I am " << age << " years old." << std::endl;
            }
            void study() {
                std::cout << "I am studying " << major << "." << std::endl;
            }
            void setAge(int newAge) {
                age = newAge;
            }
};

int main() {

    Student student1("John", "Computer Science", 20, 3.6);
    student1.sayHello();
    student1.study();
    student1.setAge(21);

    std::cout << "My GPA is " << student1.gpa << std::endl;

    Student student2("Jane", "Biology", 19, 3.8);
    student2.sayHello();
    student2.study();
    student2.setAge(20);

    std::cout << "My GPA is " << student2.gpa << std::endl;

    Student student3("Alice", "Mathematics", 22, 3.9);
    student3.sayHello();
    student3.study();
    student3.setAge(23);

    std::cout << "My GPA is " << student3.gpa << std::endl;

    return 0;
}