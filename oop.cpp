#include <iostream>

class Person {
    public:

        std::string name;
        std::string occupation = "Unemployed"; // Default value
        int age;

        void sayHello() {
            std::cout << "Hello, my name is " << name << " and I am " << age << " years old." << std::endl;
        }
        void work() {
            std::cout << "I am a " << occupation << "." << std::endl;
        }
        void setAge(int newAge) {
            age = newAge;
        }
};

int main() {

    Person person1;

    person1.name = "John";

    person1.occupation = "Software Developer";
    person1.age = 30;

    person1.sayHello();
    person1.work();
    person1.setAge(31);

    Person person2;

    person2.name = "Jane";
    person2.age = 25;

    person2.sayHello();
    person2.work();
    person2.setAge(26);

    return 0;
}