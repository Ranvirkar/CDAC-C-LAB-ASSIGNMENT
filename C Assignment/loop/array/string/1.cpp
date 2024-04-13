#include <iostream>
#include <cctype> // For islower, toupper, and isdigit
using namespace std;

int main() {
    string sentence;
    cout << "Enter a sentence: ";
    getline(cin, sentence);

    for (char& c : sentence) {
        if (c == ' ') {
            c = '*'; // Replace space with *
        } else if (isalpha(c)) {
            if (islower(c)) {
                c = toupper(c); // Reverse case of alphabets
            } else {
                c = tolower(c);
            }
        } else if (isdigit(c)) {
            c = '?'; // Replace digits with ?
        }
    }

    cout << "Altered sentence: " << sentence << endl;

    return 0;
}
