#include <stdio.h>

// Function to read a matrix
void readMatrix(int rows, int cols, int mat[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
}

// Function to print a matrix
void printMatrix(int rows, int cols, int mat[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

// Function to multiply two matrices
void multiply(int r1, int c1, int mat1[r1][c1],
              int r2, int c2, int mat2[r2][c2],
              int result[r1][c2]) {

    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < c1; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

int main() {
    int r1, c1, r2, c2;

    // Input sizes
    printf("Enter rows and cols of first matrix: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter rows and cols of second matrix: ");
    scanf("%d %d", &r2, &c2);

    // Check if multiplication is possible
    if (c1 != r2) {
        printf("Multiplication not possible! Columns of first must equal rows of second.\n");
        return 0;
    }

    int mat1[r1][c1], mat2[r2][c2], result[r1][c2];

    // Input matrices
    printf("Enter elements of first matrix:\n");
    readMatrix(r1, c1, mat1);

    printf("Enter elements of second matrix:\n");
    readMatrix(r2, c2, mat2);

    // Multiply
    multiply(r1, c1, mat1, r2, c2, mat2, result);

    // Output
    printf("Resultant matrix:\n");
    printMatrix(r1, c2, result);

    return 0;
}