#include <iostream>

#include "rectangle/Rectangle.h"

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
