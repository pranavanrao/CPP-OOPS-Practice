#ifndef DOG_H
#define DOG_H

#include "Animal.h"

using namespace std;

class Dog : public Animal
{
public:
    Dog();

    void setType(string tp);
    void displayInfo(string c);
    void bark();
};

#endif // DOG_H
