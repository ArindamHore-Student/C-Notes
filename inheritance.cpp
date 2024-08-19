#include <stdio.h>

class Animal {
    public:
        bool isAlive = true;
    void eat() {
            printf("Animal is eating\n");
    }
};

class Dog : public Animal {
    public:

    void bark() {
        printf("Dog is barking\n");
    }
};

class Cat : public Animal {
    public:

    void meow() {
        printf("Cat is meowing\n");
    }
};

class Shape {
    public:
        int width = -1;
        int height = -1;
};

class Rectangle : public Shape {
    public:
        int getArea() {
            return width * height;
        }
};

class Triangle : public Shape {
    public:
        int getArea() {
            return width * height / 2;
        }
};

class Square : public Shape {
    public:
        int getArea() {
            return width * width;
        }
};

int main() {
    Dog dog;
    dog.eat();
    dog.bark();

    Cat cat;
    cat.eat();
    cat.meow();

    Rectangle rect;
    rect.width = 10;
    rect.height = 5;
    printf("Rectangle area: %d\n", rect.getArea());

    Triangle tri;
    tri.width = 10;
    tri.height = 5;
    printf("Triangle area: %d\n", tri.getArea());

    Square sq;
    sq.width = 10;
    printf("Square area: %d\n", sq.getArea());

    return 0;
}
