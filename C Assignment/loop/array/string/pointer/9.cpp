#include <iostream>
using namespace std;

// Recursive function to calculate the nth Fibonacci number
unsigned long long fibonacci(int n) {
    if (n == 1) {
        return 0; // Base case: F(1) = 0
    } else if (n == 2) {
        return 1; // Base case: F(2) = 1
    } else {
        return fibonacci(n - 2) + fibonacci(n - 1); // Recursive case
    }
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid input. Please enter a positive integer." << endl;
        return 1;
    }

    cout << "First " << n << " Fibonacci numbers:" << endl;
    for (int i = 1; i <= n; ++i) {
        cout << fibonacci(i) << " ";
    }
    cout << endl;

    return 0;
}
