#include <iostream>
#include <string>
using namespace std;

const int MAX_STRINGS = 100; // Maximum number of strings

int main() {
    int n;
    cout << "Enter the number of strings: ";
    cin >> n;

    if (n <= 0 || n > MAX_STRINGS) {
        cout << "Invalid input. Please enter a valid positive integer." << endl;
        return 1;
    }

    string strings[MAX_STRINGS];
    cout << "Enter " << n << " strings:" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> strings[i];
    }

    string longestString = strings[0];
    for (int i = 1; i < n; ++i) {
        if (strings[i].length() > longestString.length()) {
            longestString = strings[i];
        }
    }

    cout << "Longest string: " << longestString << endl;

    return 0;
}
