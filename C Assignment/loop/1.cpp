#include <iostream>
using namespace std;

int main() {
    int num, sum = 0;

    cout << "Enter positive numbers (enter a negative number to stop):\n";

    while (true) {
        cin >> num;
        if (num < 0)
            break; // Exit the loop if a negative number is entered
        sum += num;
    }

    cout << "Sum of the given positive numbers: " << sum << endl;

    return 0;
}
