#include <iostream>
#include <string>
#include <algorithm> // For transform function
using namespace std;

// Function to display the menu
void displayMenu() {
    cout << "\nString Operations Menu:\n";
    cout << "1. Length\n";
    cout << "2. Copy\n";
    cout << "3. Concatenation\n";
    cout << "4. Compare\n";
    cout << "5. Reverse\n";
    cout << "6. Uppercase\n";
    cout << "7. Lowercase\n";
    cout << "8. Check case\n";
    cout << "9. Exit\n";
}

int main() {
    string str1, str2;
    int choice;

    do {
        displayMenu();
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter a string: ";
                cin.ignore(); // Clear newline from previous input
                getline(cin, str1);
                cout << "Length of the string: " << str1.length() << endl;
                break;

            case 2:
                cout << "Enter the source string: ";
                cin.ignore();
                getline(cin, str1);
                str2 = str1; // Copy
                cout << "Copied string: " << str2 << endl;
                break;

            case 3:
                cout << "Enter the first string: ";
                cin.ignore();
                getline(cin, str1);
                cout << "Enter the second string: ";
                getline(cin, str2);
                str1 += str2; // Concatenation
                cout << "Concatenated string: " << str1 << endl;
                break;

            case 4:
                cout << "Enter the first string: ";
                cin.ignore();
                getline(cin, str1);
                cout << "Enter the second string: ";
                getline(cin, str2);
                if (str1 == str2)
                    cout << "Strings are equal.\n";
                else
                    cout << "Strings are not equal.\n";
                break;

            case 5:
                cout << "Enter a string: ";
                cin.ignore();
                getline(cin, str1);
                reverse(str1.begin(), str1.end()); // Reverse
                cout << "Reversed string: " << str1 << endl;
                break;

            case 6:
                cout << "Enter a string: ";
                cin.ignore();
                getline(cin, str1);
                transform(str1.begin(), str1.end(), str1.begin(), ::toupper); // Uppercase
                cout << "Uppercase string: " << str1 << endl;
                break;

            case 7:
                cout << "Enter a string: ";
                cin.ignore();
                getline(cin, str1);
                transform(str1.begin(), str1.end(), str1.begin(), ::tolower); // Lowercase
                cout << "Lowercase string: " << str1 << endl;
                break;

            case 8:
                cout << "Enter a string: ";
                cin.ignore();
                getline(cin, str1);
                if (any_of(str1.begin(), str1.end(), ::isupper))
                    cout << "String contains uppercase letters.\n";
                else if (any_of(str1.begin(), str1.end(), ::islower))
                    cout << "String contains lowercase letters.\n";
                else
                    cout << "String contains no alphabets.\n";
                break;

            case 9:
                cout << "Exiting the program. Goodbye!\n";
                break;

            default:
                cout << "Invalid choice. Please select a valid option.\n";
        }
    } while (choice != 9);

    return 0;
}
