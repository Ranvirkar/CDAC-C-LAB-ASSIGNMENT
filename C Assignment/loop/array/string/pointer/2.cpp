#include <iostream>
using namespace std;

// Function to check if a number is even
int isEven(int num) {
    return (num % 2 == 0) ? 1 : 0;
}

int main() {
    int n;
    cout << "Enter the number of integers: ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid input. Please enter a positive value for n." << endl;
        return 1;
    }

    int num;
    for (int i = 0; i < n; ++i) {
        cout << "Enter an integer: ";
        cin >> num;
        if (isEven(num)) {
            cout << num << " is even." << endl;
        } else {
            cout << num << " is odd." << endl;
        }
    }

    return 0;
}
