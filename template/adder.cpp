#include "adder.h"

#include <string>

using namespace std;

template<class T>
Adder<T>::Adder() {}

template<class T>
T Adder<T>::add(T a, T b)
{
    return a+b;
}

template class Adder<int>;
template class Adder<string>;
