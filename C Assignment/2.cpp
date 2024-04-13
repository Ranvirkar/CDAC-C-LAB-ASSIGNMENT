//Write a program, which accepts two integers and an operator as a character (+ - * / ), performs the corresponding operation and displays the result.
#include <iostream>
using namespace std;
int main() {
    int num1, num2;
    char op;
    float result;
    // Input: Ask the user to enter two integers and an operator
    cout << "Enter two integers: ";
    cin >> num1 >> num2;
    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;
    // Perform the corresponding operation
    switch (op) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = static_cast<float>(num1) / num2;
            } else {
                cout << "Error: Division by zero!" << endl;
                return 1; // Exit the program
            }
            break;
        default:
            cout << "Invalid operator. Please use +, -, *, or /." << endl;
            return 1; // Exit the program
    }
    // Output: Display the result
    cout << "Result: " << result << endl;
    return 0;
}
