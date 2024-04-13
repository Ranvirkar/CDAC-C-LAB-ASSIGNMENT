#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
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

    int num;
    cout << "Enter the number you want to count: ";
    cin >> num;

    int count = 0;
    for (int i = 0; i < n; ++i) {
        if (arr[i] == num) {
            count++;
        }
    }

    cout << "The number " << num << " appears " << count << " times in the array." << endl;

    return 0;
}
