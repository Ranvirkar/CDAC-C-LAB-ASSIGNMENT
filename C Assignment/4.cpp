#include <iostream>
using namespace std;
int main() {
    float radius;
    int choice;
    // Input: Ask the user to enter the radius
    cout << "Enter the radius: ";
    cin >> radius;
    // Input: Ask the user to choose an operation
    cout << "\nChoose an operation:\n";
    cout << "1. Area of Circle\n";
    cout << "2. Circumference of Circle\n";
    cout << "3. Volume of Sphere\n";
    cout << "Enter your choice (1-3): ";
    cin >> choice;
    switch (choice) {
        case 1:
            cout << "Area of Circle: " << 3.14 * radius * radius << endl;
            break;
        case 2:
            cout << "Circumference of Circle: " << 2 * 3.14 * radius << endl;
            break;
        case 3:
            cout << "Volume of Sphere: " << (4.0 / 3.0) * 3.14 * radius * radius * radius << endl;
            break;
        default:
            cout << "Invalid choice. Please enter a valid option (1-3).\n";
    }
    return 0;
}
