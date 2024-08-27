#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>

using namespace std;

class Animal
{
public:
    Animal();

    void eat();
    void sleep();

    string getColor() const;
    void setColor(const string &newColor);

private:
    string color;

protected:
    string type;
};

#endif // ANIMAL_H
