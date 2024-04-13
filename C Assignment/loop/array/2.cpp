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

    int key;
    cout << "Enter the number you wish to look for: ";
    cin >> key;

    bool found = false;
    for (int i = 0; i < n; ++i) {
        if (arr[i] == key) {
            found = true;
            break;
        }
    }

    if (found) {
        cout << "The number " << key << " is present in the array." << endl;
    } else {
        cout << "The number " << key << " is not present in the array." << endl;
    }

    return 0;
}
