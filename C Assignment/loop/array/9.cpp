#include <iostream>
using namespace std;

const int MAX_SIZE = 10; // Maximum size for the matrix

// Function to check if a matrix is symmetric
bool isSymmetric(int mat[][MAX_SIZE], int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (mat[i][j] != mat[j][i]) {
                return false;
            }
        }
    }
    return true;
}

// Function to calculate the trace (sum of diagonal elements)
int calculateTrace(int mat[][MAX_SIZE], int n) {
    int trace = 0;
    for (int i = 0; i < n; ++i) {
        trace += mat[i][i];
    }
    return trace;
}

// Function to check if a matrix is upper triangular
bool isUpperTriangular(int mat[][MAX_SIZE], int n) {
    for (int i = 1; i < n; ++i) {
        for (int j = 0; j < i; ++j) {
            if (mat[i][j] != 0) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    int n;
    cout << "Enter the size of the square matrix: ";
    cin >> n;

    if (n <= 0 || n > MAX_SIZE) {
        cout << "Invalid input. Please enter a valid positive integer." << endl;
        return 1;
    }

    int matrix[MAX_SIZE][MAX_SIZE];
    cout << "Enter the matrix elements:" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> matrix[i][j];
        }
    }

    if (isSymmetric(matrix, n)) {
        cout << "The matrix is symmetric." << endl;
    } else {
        cout << "The matrix is not symmetric." << endl;
    }

    int trace = calculateTrace(matrix, n);
    cout << "Trace of the matrix: " << trace << endl;

    if (isUpperTriangular(matrix, n)) {
        cout << "The matrix is an upper triangular matrix." << endl;
    } else {
        cout << "The matrix is not an upper triangular matrix." << endl;
    }

    return 0;
}
