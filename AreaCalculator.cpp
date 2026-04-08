#include <iostream>
using namespace std;

// Function prototypes
double calculateTriangle(double base, double height);
double calculateRectangle(double length, double width);
double calculateSquare(double side);

int main() {
    int choice;

    while (true) {
        // Menu
        cout << "\n=== Area Calculator ===" << endl;
        cout << "1. Triangle" << endl;
        cout << "2. Rectangle" << endl;
        cout << "3. Square" << endl;
        cout << "4. Quit" << endl;
        cout << "Enter your choice: ";

        cin >> choice;

        // Validate input type
        if (cin.fail()) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Invalid input. Please enter a number." << endl;
            continue;
        }

        if (choice == 1) {
            double base, height;
            cout << "Enter base: ";
            cin >> base;
            cout << "Enter height: ";
            cin >> height;

            cout << "Area of triangle = "
                 << calculateTriangle(base, height) << endl;
        }
        else if (choice == 2) {
            double length, width;
            cout << "Enter length: ";
            cin >> length;
            cout << "Enter width: ";
            cin >> width;

            cout << "Area of rectangle = "
                 << calculateRectangle(length, width) << endl;
        }
        else if (choice == 3) {
            double side;
            cout << "Enter side: ";
            cin >> side;

            cout << "Area of square = "
                 << calculateSquare(side) << endl;
        }
        else if (choice == 4) {
            cout << "Exiting program..." << endl;
            break;
        }
        else {
            cout << "Invalid choice. Please select a valid option." << endl;
        }
    }

    return 0;
}

// Function definitions
double calculateTriangle(double base, double height) {
    return 0.5 * base * height;
}

double calculateRectangle(double length, double width) {
    return length * width;
}

double calculateSquare(double side) {
    return side * side;
}