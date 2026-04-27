#include <iostream>
#include "Rectangle.h"

using namespace std;

int main()
{
    Rectangle rect;

    float length, width;

    // User input
    cout << "Enter length: ";
    cin >> length;

    cout << "Enter width: ";
    cin >> width;

    // Assign values
    rect.setLength(length);
    rect.setWidth(width);

    // Output area
    cout << "Area of rectangle: " << rect.calculateArea() << endl;

    float length2, width2;

    cout << "Enter length for second rectangle: ";
    cin >> length2;

    cout << "Enter width for second rectangle: ";
    cin >> width2;

    // Create object using overloaded constructor
    Rectangle rect2(length2, width2);

    cout << "Area (second rectangle): " << rect2.calculateArea() << endl;

    return 0;
}