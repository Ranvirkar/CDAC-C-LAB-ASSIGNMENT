#include <iostream>
using namespace std;

// Function to check if a number is prime
int isPrime(int num) {
    if (num <= 1) {
        return 0; // Not prime
    }
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return 0; // Not prime
        }
    }
    return 1; // Prime
}

int main() {
    int cnt = 0;
    int num = 2;

    cout << "First 10 prime numbers:" << endl;
    while (cnt < 10) {
        if (isPrime(num)) {
            cout << num << " ";
            cnt++;
        }
        num++;
    }

    return 0;
}
