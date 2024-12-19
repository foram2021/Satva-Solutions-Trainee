// Introduction to C++ OOP Concepts
#include <iostream>
#include <string>
using namespace std;

// Class, Objects & Constructor
class Student {
private:
    string name;
    int age;

public:
    // Constructor
    Student(string studentName, int studentAge) {
        name = studentName;
        age = studentAge;
    }

    // Method to display student details
    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

// Abstraction
class AbstractDemo {
public:
    virtual void showMessage() = 0; // Pure virtual function
};

class DerivedDemo : public AbstractDemo {
public:
    void showMessage() override {
        cout << "This is an abstract class demo!" << endl;
    }
};

// Encapsulation
class EncapsulationDemo {
private:
    int data;

public:
    void setData(int value) { data = value; }
    int getData() { return data; }
};

// Inheritance
class Animal {
public:
    void eat() { cout << "This animal eats food." << endl; }
};

class Dog : public Animal {
public:
    void bark() { cout << "The dog barks." << endl; }
};

// Interface (Achieved using Abstract Class)
class InterfaceDemo {
public:
    virtual void performTask() = 0; // Pure virtual function
};

class ImplementInterface : public InterfaceDemo {
public:
    void performTask() override {
        cout << "Performing the interface-defined task!" << endl;
    }
};

// Enum in C++
enum Color { Red, Green, Blue };

// Main function
int main() {
    // Class, Objects & Constructor
    Student s1("Alice", 20);
    s1.display();

    // Abstraction
    AbstractDemo* demo = new DerivedDemo();
    demo->showMessage();
    delete demo;

    // Encapsulation
    EncapsulationDemo obj;
    obj.setData(42);
    cout << "Encapsulated Data: " << obj.getData() << endl;

    // Inheritance
    Dog d;
    d.eat();
    d.bark();

    // Interface
    ImplementInterface impl;
    impl.performTask();

    // Enum
    Color favoriteColor = Blue;
    cout << "Favorite Color: " << favoriteColor << " (0: Red, 1: Green, 2: Blue)" << endl;

    return 0;
}
