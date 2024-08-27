#include "Rectangle.h"

Rectangle::Rectangle() {}

void Rectangle::initialize(int length, int breadth)
{
    m_length = length;
    m_breadth = breadth;
}

int Rectangle::area()
{
    return m_length*m_breadth;
}

int Rectangle::perimeter()
{
    int perimeter;
    perimeter = 2*(m_length+m_breadth);
    return perimeter;
}
