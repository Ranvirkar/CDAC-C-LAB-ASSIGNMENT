#include <iostream>
using namespace std;

const int MAX_ROWS = 10; // Maximum number of rows
const int MAX_COLS = 10; // Maximum number of columns

void inputMatrix(int mat[][MAX_COLS], int rows, int cols) {
    cout << "Enter the matrix elements:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> mat[i][j];
        }
    }
}

void displayMatrix(int mat[][MAX_COLS], int rows, int cols) {
    cout << "Matrix elements:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

void transposeMatrix(int mat[][MAX_COLS], int transposed[][MAX_COLS], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            transposed[j][i] = mat[i][j];
        }
    }
}

int main() {
    int rows, cols;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    if (rows <= 0 || cols <= 0 || rows > MAX_ROWS || cols > MAX_COLS) {
        cout << "Invalid input. Please enter valid dimensions." << endl;
        return 1;
    }

    int matrixA[MAX_ROWS][MAX_COLS];
    int matrixB[MAX_ROWS][MAX_COLS];

    inputMatrix(matrixA, rows, cols);
    displayMatrix(matrixA, rows, cols);

    transposeMatrix(matrixA, matrixB, rows, cols);

    cout << "Transposed matrix (Matrix B):" << endl;
    displayMatrix(matrixB, cols, rows);

    return 0;
}
