#include "Dog.h"

#include <iostream>

Dog::Dog() {}

void Dog::setType(string tp)
{
    type = tp;
}

void Dog::displayInfo(string c)
{
    cout << "I am a " << type << endl;
    cout << "My color is " << c << endl;
}

void Dog::bark()
{
    cout << "I can bark!!! Woof!!! Woof!!!" << endl;
}
