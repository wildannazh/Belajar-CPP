#include <iostream>

const int ROWS_A = 4;
const int COLS_A = 2;
const int ROWS_B = 2;
const int COLS_B = 4;

void multiplyMatrices(int A[][COLS_A], int B[][COLS_B], int result[][COLS_B]) {
    for (int i = 0; i < ROWS_A; i++) {
        for (int j = 0; j < COLS_B; j++) {
            result[i][j] = 0;
            for (int k = 0; k < COLS_A; k++) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

void addMatrices(int A[][COLS_A], int B[][COLS_B], int result[][COLS_A]) {
    for (int i = 0; i < ROWS_A; i++) {
        for (int j = 0; j < COLS_A; j++) {
            result[i][j] = A[i][j] + B[i][j];
        }
    }
}

void printMatrix(int matrix[][COLS_A], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    int A[ROWS_A][COLS_A] = {{1, 2}, {3, 4}, {5, 6}, {7, 8}};
    int B[ROWS_B][COLS_B] = {{1, 2, 3, 4}, {5, 6, 7, 8}};
    int product[ROWS_A][COLS_B];
    int sum[ROWS_A][COLS_A];

    multiplyMatrices(A, B, product);
    addMatrices(A, B, sum);

    std::cout << "Matrix A:" << std::endl;
    printMatrix(A, ROWS_A, COLS_A);

    std::cout << "Matrix B:" << std::endl;
    printMatrix(B, ROWS_B, COLS_B);

    std::cout << "Product of A and B:" << std::endl;
    printMatrix(product, ROWS_A, COLS_B);

    std::cout << "Sum of A and B:" << std::endl;
    printMatrix(sum, ROWS_A, COLS_A);

    return 0;
}

