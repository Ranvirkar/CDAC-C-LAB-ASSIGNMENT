#include <iostream>
using namespace std;
int main() {
    int x, y, choice;
    // Input: Ask the user to enter two numbers
    cout << "Enter two numbers (x and y): ";
    cin >> x >> y;
    // Input: Ask the user to choose an operation
    cout << "\nChoose an operation:\n";
    cout << "1. Equality Check (x == y)\n";
    cout << "2. Less Than Check (x < y)\n";
    cout << "3. Quotient and Remainder (x / y)\n";
    cout << "4. Range Check (Enter a number to check if it lies between x and y)\n";
    cout << "5. Swap (Interchange x and y)\n";
    cout << "Enter your choice (1-5): ";
    cin >> choice;
    switch (choice) {
        case 1:
            if (x == y)
                cout << "x is equal to y.\n";
            else
                cout << "x is not equal to y.\n";
            break;
        case 2:
            if (x < y)
                cout << "x is less than y.\n";
            else
                cout << "x is not less than y.\n";
            break;
        case 3:
            cout << "Quotient (x / y): " << x / y << endl;
            cout << "Remainder (x % y): " << x % y << endl;
            break;
        case 4:
            int num;
            cout << "Enter a number: ";
            cin >> num;
            if (num >= x && num <= y)
                cout << num << " lies between x and y.\n";
            else
                cout << num << " does not lie between x and y.\n";
            break;
        case 5:
            swap(x, y);
            cout << "After swapping: x = " << x << ", y = " << y << endl;
            break;
        default:
            cout << "Invalid choice. Please enter a valid option (1-5).\n";
    }
    return 0;
}
