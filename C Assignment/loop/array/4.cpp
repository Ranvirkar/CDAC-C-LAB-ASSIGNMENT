#include <iostream>
#include <algorithm> // For std::sort
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid input. Please enter a positive value for n." << endl;
        return 1;
    }

    int arr[100]; // Assuming a maximum of 100 elements
    cout << "Enter " << n << " numbers: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    // Sort therray in descending order
    sort(arr, arr + n, greater<int>());

    cout << "Sorted array in descending order: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }

    return 0;
}
