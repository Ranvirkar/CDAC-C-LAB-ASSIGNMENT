#include <iostream>
using namespace std;

// Recursive function to calculate x raised to y
double power(double x, int y) {
    if (y == 0) {
        return 1.0;
    } else if (y > 0) {
        return x * power(x, y - 1);
    } else {
        return 1.0 / power(x, -y);
    }
}

int main() {
    double x;
    int y;
    cout << "Enter the base (x): ";
    cin >> x;
    cout << "Enter the exponent (y): ";
    cin >> y;

    double result = power(x, y);
    cout << x << " raised to the power " << y << " is: " << result << endl;

    return 0;
}
