#include <iostream>
using namespace std;

void calculateSum(const int* arr, int n, int& evenSum, int& oddSum) {
    evenSum = 0;
    oddSum = 0;
    for (int i = 0; i < n; ++i) {
        if (arr[i] % 2 == 0) {
            evenSum += arr[i];
        } else {
            oddSum += arr[i];
        }
    }
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid input. Please enter a positive value for n." << endl;
        return 1;
    }

    int arr[100]; // Assuming a maximum of 100 elements
    cout << "Enter " << n << " integers: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int evenSum, oddSum;
    calculateSum(arr, n, evenSum, oddSum);

    cout << "Sum of even numbers: " << evenSum << endl;
    cout << "Sum of odd numbers: " << oddSum << endl;

    return 0;
}
