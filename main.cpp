#include <iostream>

#include "rectangle/Rectangle.h"
#include "student/Student.h"
#include "animal/Dog.h"
#include "signalslots/Signal.h"

using namespace std;

void parseRectangle() {
    cout << "Rectangle!!!" << endl;

    Rectangle rect;

    int l, b;

    cout << "Enter the length of a rectangle : ";
    cin >> l;
    cout << endl << "Enter the breadth of a rectangle : ";
    cin >> b;

    rect.initialize(l, b);
    int area = rect.area();
    int perimeter = rect.perimeter();

    cout << endl << "Area of a reactangle : " << area << endl;
    cout << "Perimeter of a rectangle : " << perimeter;
}

void parseStudent() {
    cout << "Student!!!" << endl;

    Student student;

    student.setName("Pranav N Rao");
    student.setRollNum(21);
    student.setAge(25);
    student.setLevel(100);

    cout << "Name : " << student.name() << endl;
    cout << "Roll Num : " << student.rollNum() << endl;
    cout << "Age : " << student.age() << endl;
    cout << "Level : " << student.level() << endl;
}

void parseAnimal() {
    cout << "Animal!!!" << endl;

    Dog dog1;

    // Calling  memebers from base class
    dog1.eat();
    dog1.sleep();
    dog1.setColor("Black");

    //Calling members from derived class
    dog1.bark();
    dog1.setType("Mammal");
    dog1.displayInfo(dog1.getColor());
}

void slotFunction1(int value) {
    cout << "Slot 1 received : " << value << endl;
}

void slotFunction2(int value) {
    cout << "Slot 2 received : " << value << endl;
}

int main()
{
    // RECTANGLE class
    // parseRectangle();

    // STUDENT class
    // parseStudent();

    // ANIMAL class
    // parseAnimal();

    // SIGNALS and SLOTS
    Signal signal;

    signal.connect(slotFunction1);
    signal.connect(slotFunction2);

    signal.emit(69);
    signal.emit(79);

    return 0;
}
