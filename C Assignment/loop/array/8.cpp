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
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

bool canAddOrMultiply(int rowsA, int colsA, int rowsB, int colsB, bool& canAdd, bool& canMultiply) {
    canAdd = (rowsA == rowsB) && (colsA == colsB);
    canMultiply = (colsA == rowsB);
    return canAdd || canMultiply;
}

void addMatrices(int matA[][MAX_COLS], int matB[][MAX_COLS], int matC[][MAX_COLS], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            matC[i][j] = matA[i][j] + matB[i][j];
        }
    }
}

void multiplyMatrices(int matA[][MAX_COLS], int matB[][MAX_COLS], int matD[][MAX_COLS], int rowsA, int colsA, int colsB) {
    for (int i = 0; i < rowsA; ++i) {
        for (int j = 0; j < colsB; ++j) {
            matD[i][j] = 0;
            for (int k = 0; k < colsA; ++k) {
                matD[i][j] += matA[i][k] * matB[k][j];
            }
        }
    }
}

int main() {
    int rowsA, colsA, rowsB, colsB;
    cout << "Enter the dimensions of Matrix A (rows columns): ";
    cin >> rowsA >> colsA;
    cout << "Enter the dimensions of Matrix B (rows columns): ";
    cin >> rowsB >> colsB;

    if (rowsA <= 0 || colsA <= 0 || rowsB <= 0 || colsB <= 0 ||
        rowsA > MAX_ROWS || colsA > MAX_COLS || rowsB > MAX_ROWS || colsB > MAX_COLS) {
        cout << "Invalid input. Please enter valid dimensions." << endl;
        return 1;
    }

    int matrixA[MAX_ROWS][MAX_COLS];
    int matrixB[MAX_ROWS][MAX_COLS];
    int matrixC[MAX_ROWS][MAX_COLS]; // For addition
    int matrixD[MAX_ROWS][MAX_COLS]; // For multiplication

    cout << "Enter elements of Matrix A:" << endl;
    inputMatrix(matrixA, rowsA, colsA);

    cout << "Enter elements of Matrix B:" << endl;
    inputMatrix(matrixB, rowsB, colsB);

    bool canAdd, canMultiply;
    if (!canAddOrMultiply(rowsA, colsA, rowsB, colsB, canAdd, canMultiply)) {
        cout << "Matrices cannot be added or multiplied. Check dimensions." << endl;
        return 1;
    }

    if (canAdd) {
        addMatrices(matrixA, matrixB, matrixC, rowsA, colsA);
        cout << "Matrix C (Sum of A and B):" << endl;
        displayMatrix(matrixC, rowsA, colsA);
    }

    if (canMultiply) {
        multiplyMatrices(matrixA, matrixB, matrixD, rowsA, colsA, colsB);
        cout << "Matrix D (Product of A and B):" << endl;
        displayMatrix(matrixD, rowsA, colsB);
    }

    return 0;
}
