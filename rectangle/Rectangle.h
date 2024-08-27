#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle
{
public:
    Rectangle();

    void initialize(int length, int breadth);
    int area();
    int perimeter();

private:
    int m_length;
    int m_breadth;
};

#endif // RECTANGLE_H
