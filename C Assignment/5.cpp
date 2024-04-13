#include <iostream>
using namespace std;
// Function to find the greatest common divisor (GCD) of two numbers
int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
// Function to simplify a fraction
void simplifyFraction(int& numerator, int& denominator) {
    int commonDivisor = gcd(numerator, denominator);
    numerator /= commonDivisor;
    denominator /= commonDivisor;
}
// Function to add two fractions
void addFractions(int num1, int den1, int num2, int den2) {
    int numerator = num1 * den2 + num2 * den1;
    int denominator = den1 * den2;
    simplifyFraction(numerator, denominator);
    cout << "Sum: " << numerator << "/" << denominator << endl;
}
// Function to subtract two fractions
void subtractFractions(int num1, int den1, int num2, int den2) {
    int numerator = num1 * den2 - num2 * den1;
    int denominator = den1 * den2;
    simplifyFraction(numerator, denominator);
    cout << "Difference: " << numerator << "/" << denominator << endl;
}
// Function to multiply two fractions
void multiplyFractions(int num1, int den1, int num2, int den2) {
    int numerator = num1 * num2;
    int denominator = den1 * den2;
    simplifyFraction(numerator, denominator);
    cout << "Product: " << numerator << "/" << denominator << endl;
}
int main() {
    int num1, den1, num2, den2, choice;
    // Input: Ask the user to enter two fractions
    cout << "Enter the first fraction (numerator denominator): ";
    cin >> num1 >> den1;
    cout << "Enter the second fraction (numerator denominator): ";
    cin >> num2 >> den2;
    // Input: Ask the user to choose an operation
    cout << "\nChoose an operation:\n";
    cout << "1. Add\n";
    cout << "2. Subtract\n";
    cout << "3. Multiply\n";
    cout << "Enter your choice (1-3): ";
    cin >> choice;
    switch (choice) {
        case 1:
            addFractions(num1, den1, num2, den2);
            break;
        case 2:
            subtractFractions(num1, den1, num2, den2);
            break;
        case 3:
            multiplyFractions(num1, den1, num2, den2);
            break;
        default:
            cout << "Invalid choice. Please enter a valid option (1-3).\n";
    }
    return 0;
}
