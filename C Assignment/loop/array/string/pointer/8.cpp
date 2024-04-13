#include <iostream>
using namespace std;

// Recursive function to calculate the sum of digits until a single-digit number
int sumOfDigits(int num) {
    if (num < 10) {
        return num; // Base case: single-digit number
    }
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sumOfDigits(sum); // Recursive call
}

int main() {
    int num;
    cout << "Enter a positive integer: ";
    cin >> num;

    if (num <= 0) {
        cout << "Invalid input. Please enter a positive integer." << endl;
        return 1;
    }

    int result = sumOfDigits(num);
    cout << "Sum of digits until a single-digit number: " << result << endl;

    return 0;
}
