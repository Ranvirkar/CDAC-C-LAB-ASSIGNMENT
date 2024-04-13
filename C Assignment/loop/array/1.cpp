#include <iostream>
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

    int smallest = arr[0];
    int largest = arr[0];

    // Find the smallest and largest elements
    for (int i = 1; i < n; ++i) {
        if (arr[i] < smallest)
            smallest = arr[i];
        if (arr[i] > largest)
            largest = arr[i];
    }

    int range = largest - smallest;

    cout << "Smallest element: " << smallest << endl;
    cout << "Largest element: " << largest << endl;
    cout << "Range of elements: " << range << endl;

    return 0;
}
