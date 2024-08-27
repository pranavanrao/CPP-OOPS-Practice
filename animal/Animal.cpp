#include "Animal.h"

#include <iostream>

Animal::Animal() {}

void Animal::eat()
{
    cout << "I can eat!!!" << endl;
}

void Animal::sleep()
{
    cout << "I can sleep!!!" << endl;
}

string Animal::getColor() const
{
    return color;
}

void Animal::setColor(const string &newColor)
{
    color = newColor;
}
