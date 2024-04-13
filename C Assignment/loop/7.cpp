#include <iostream>
using namespace std;

// Function to calculate the area of a circle
double getCircleArea(double radius) {
    return 3.14159265358979323846 * radius * radius;
}

// Function to calculate the area of a triangle
double getTriangleArea(double base, double height) {
    return base * height * 0.5;
}

// Function to calculate the area of a square
double getSquareArea(double side) {
    return side * side;
}

// Function to calculate the area of a rectangle
double getRectangleArea(double length, double breadth) {
    return length * breadth;
}

int main() {
    bool flag = true;
    while (flag) {
        cout << "Enter 1 to calculate the area of a circle" << endl;
        cout << "Enter 2 to calculate the area of a triangle" << endl;
        cout << "Enter 3 to calculate the area of a square" << endl;
        cout << "Enter 4 to calculate the area of a rectangle" << endl;
        cout << "Enter 5 to terminate the program" << endl;

        int choice;
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter radius: ";
                double radius;
                cin >> radius;
                cout << "Area = " << getCircleArea(radius) << endl;
                break;
            case 2:
                cout << "Enter base: ";
                double base, height;
                cin >> base;
                cout << "Enter height: ";
                cin >> height;
                cout << "Area = " << getTriangleArea(base, height) << endl;
                break;
            case 3:
                cout << "Enter side length: ";
                double side;
                cin >> side;
                cout << "Area = " << getSquareArea(side) << endl;
                break;
            case 4:
                cout << "Enter length: ";
                double length, breadth;
                cin >> length;
                cout << "Enter breadth: ";
                cin >> breadth;
                cout << "Area = " << getRectangleArea(length, breadth) << endl;
                break;
            case 5:
                flag = false;
                break;
            default:
                cout << "Invalid Choice" << endl;
        }
    }

    cout << "Program terminated" << endl;
    return 0;
}
