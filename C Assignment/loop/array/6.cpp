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

void calculateRowSum(int mat[][MAX_COLS], int rows, int cols) {
    cout << "Sum of each row:" << endl;
    for (int i = 0; i < rows; ++i) {
        int rowSum = 0;
        for (int j = 0; j < cols; ++j) {
            rowSum += mat[i][j];
        }
        cout << "Row " << i << ": " << rowSum << endl;
    }
}

void calculateColumnSum(int mat[][MAX_COLS], int rows, int cols) {
    cout << "Sum of each column:" << endl;
    for (int j = 0; j < cols; ++j) {
        int colSum = 0;
        for (int i = 0; i < rows; ++i) {
            colSum += mat[i][j];
        }
        cout << "Column " << j << ": " << colSum << endl;
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

    int matrix[MAX_ROWS][MAX_COLS];
    inputMatrix(matrix, rows, cols);
    displayMatrix(matrix, rows, cols);
    calculateRowSum(matrix, rows, cols);
    calculateColumnSum(matrix, rows, cols);

    return 0;
}
