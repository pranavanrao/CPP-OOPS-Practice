#include <iostream>

#include "animal/Dog.h"

using namespace std;

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
