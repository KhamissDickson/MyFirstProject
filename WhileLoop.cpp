#include <iostream>
using namespace std;

int main() {
    int number;
    bool validInput = false;

    // Loop until valid input is entered
    while (!validInput) {
        cout << "Enter an integer value between 5 and 10: ";
        
        cin >> number;

        // Check if input failed (non-integer)
        if (cin.fail()) {
            cin.clear(); // clear error flag
            cin.ignore(1000, '\n'); // discard invalid input
            cout << "Invalid input. Please enter a valid integer." << endl;
        }
        else if (number < 5 || number > 10) {
            cout << "Input must be between 5 and 10. Try again." << endl;
        }
        else {
            validInput = true; // valid input
        }
    }

    // After loop
    cout << "Your input value has been accepted." << endl;

    return 0;
}