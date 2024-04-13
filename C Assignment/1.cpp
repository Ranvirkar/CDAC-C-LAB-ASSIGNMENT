//Accept a single digit from the user and display it in words. For example, if digit entered is 9, display Nine
#include <iostream>
using namespace std;
int main() {
    int digit;
    // Input: Ask the user to enter a single digit
    cout << "Enter a single digit (0-9): ";
    cin >> digit;
    // Check if the input is a valid single digit
    if (digit >= 0 && digit <= 9) {
        const char* words[] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
        cout << "In words: " << words[digit] << endl;
    } else {
        cout << "Invalid input. Please enter a single digit (0-9)." << endl;
    }
    return 0;
}
