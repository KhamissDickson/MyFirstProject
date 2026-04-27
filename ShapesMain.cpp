#include <iostream>
#include "Square.h"
#include "Triangle.h"
#include "Circle.h"
#include "Area.h"

using namespace std;

int main()
{
    int choice;

    do
    {
        cout << "\n1. Square\n";
        cout << "2. Triangle\n";
        cout << "3. Circle\n";
        cout << "4. Quit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1)
        {
            float side;
            cout << "Enter side: ";
            cin >> side;

            shapes::Square sq;
            sq.setSide(side);

            cout << "Area = " << Area::squareArea(sq) << endl;
        }

        else if (choice == 2)
        {
            float base, height;
            cout << "Enter base: ";
            cin >> base;
            cout << "Enter height: ";
            cin >> height;

            shapes::Triangle t;
            t.setBase(base);
            t.setHeight(height);

            cout << "Area = " << Area::triangleArea(t) << endl;
        }

        else if (choice == 3)
        {
            float radius;
            cout << "Enter radius: ";
            cin >> radius;

            shapes::Circle c;
            c.setRadius(radius);

            cout << "Area = " << Area::circleArea(c) << endl;
        }

    } while (choice != 4);

    return 0;
}