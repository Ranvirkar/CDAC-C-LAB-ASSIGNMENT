#include <iostream>
#include <cmath> // For pow and factorial
using namespace std;

// Function to calculate x raised to y
double power(double x, int y) {
    return pow(x, y);
}

// Function to calculate factorial of a number
double factorial(int n) {
    double result = 1.0;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}

// Function to calculate the sum of the Taylor series for sin(x)
double sinTaylorSeries(double x, int n) {
    double sum = 0.0;
    for (int i = 0; i < n; ++i) {
        double term = power(-1, i) * power(x, 2 * i + 1) / factorial(2 * i + 1);
        sum += term;
    }
    return sum;
}

int main() {
    double x;
    int n;
    cout << "Enter the value of x: ";
    cin >> x;
    cout << "Enter the number of terms (n): ";
    cin >> n;

    double sinValue = sinTaylorSeries(x, n);
    cout << "sin(" << x << ") using Taylor series with " << n << " terms: " << sinValue << endl;

    return 0;
}
