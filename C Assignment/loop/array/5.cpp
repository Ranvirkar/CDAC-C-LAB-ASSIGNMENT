#include <iostream>
using namespace std;

void decToBinary(int n) {
    int binaryNum[32]; // Array to store binary digits
    int i = 0;

    while (n > 0) {
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }

    for (int j = i - 1; j >= 0; j--) {
        cout << binaryNum[j];
    }
}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    cout << "Binary representation: ";
    decToBinary(n);

    return 0;
}
/*
#include <bitset>
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int decimalNumber;
    cout << "Enter a decimal number: ";
    cin >> decimalNumber;

    const int sz = ceil(log2(decimalNumber));
    bitset<sz> binaryRepresentation(decimalNumber);

    cout << "Binary representation: " << binaryRepresentation << endl;

    return 0;
}


*/