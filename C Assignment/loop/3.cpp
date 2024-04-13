#include <iostream>
using namespace std;

int main() {
    char ch;
    int n;

    // Input: Ask the user to enter a character and an integer n
    cout << "Enter a character: ";
    cin >> ch;
    cout << "Enter an integer n: ";
    cin >> n;

    // Display the next n characters
    cout << "Next " << n << " characters: ";
    for (int i = 1; i <= n; i++) {
        cout << static_cast<char>(ch + i) << " ";
    }
    cout << endl;

    return 0;
}
