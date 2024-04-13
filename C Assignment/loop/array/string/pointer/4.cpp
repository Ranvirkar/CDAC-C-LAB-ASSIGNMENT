#include <iostream>
#include <cstring> // For string functions
using namespace std;

// User-defined function to concatenate two strings
void myStrcat(char dest[], const char src[]) {
    strcat(dest, src);
}

// User-defined function to compare two strings
int myStrcmp(const char str1[], const char str2[]) {
    return strcmp(str1, str2);
}

// User-defined function to reverse a string
void myStrrev(char str[]) {
    int left = 0;
    int right = strlen(str) - 1;
    while (left < right) {
        swap(str[left], str[right]);
        left++;
        right--;
    }
}

// User-defined function to convert a string to uppercase
void myStrupr(char str[]) {
    for (int i = 0; str[i]; ++i) {
        str[i] = toupper(str[i]);
    }
}

int main() {
    char str1[100];
    char str2[100];

    cout << "Enter the first string: ";
    cin.getline(str1, 100);

    cout << "Enter the second string: ";
    cin.getline(str2, 100);

    int choice;
    cout << "\nString Operations Menu:\n";
    cout << "1. Concatenate\n";
    cout << "2. Compare\n";
    cout << "3. Reverse\n";
    cout << "4. Uppercase\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            myStrcat(str1, str2);
            cout << "Concatenated string: " << str1 << endl;
            break;

        case 2:
            if (myStrcmp(str1, str2) == 0) {
                cout << "Strings are equal." << endl;
            } else {
                cout << "Strings are not equal." << endl;
            }
            break;

        case 3:
            myStrrev(str1);
            cout << "Reversed string: " << str1 << endl;
            break;

        case 4:
            myStrupr(str1);
            cout << "Uppercase string: " << str1 << endl;
            break;

        default:
            cout << "Invalid choice. Please select a valid option." << endl;
    }

    return 0;
}
