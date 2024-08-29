#include <iostream>
#include <string>

#include "template/Adder.h"

using namespace std;

void templateFunction() {
    Adder<int> intAdder;

    cout << "Addition of two int : " << intAdder.add(10, 20) << endl;

    Adder<string> stringAdder;

    cout << "Addition of two strings : " << stringAdder.add("Pranav ", "Rao") << endl;
}
