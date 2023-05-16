// C program to multiply two matrices

#include <stdio.h>

void take_input(int mat[][100], int rows, int cols) {
    // function to take input for a matrix
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("[%d][%d] : ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
}

void multiply_matrices(int mat1[][100], int rows1, int cols1, int mat2[][100], int rows2, int cols2, int result[][100]) {
    // function to multiply two matrices
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            result[i][j] = 0;
            for(int q = 0; q < cols1; q++) {
                result[i][j] += mat1[i][q] * mat2[q][j];
            }
        }
    }
}

int main() {
    int rows1, cols1, rows2, cols2;

    printf("Enter rows and columns for matrix 1: ");
    scanf("%d%d", &rows1, &cols1);

    int mat1[100][100];
    printf("Enter values for matrix 1:\n");
    take_input(mat1, rows1, cols1);

    printf("For matrix 2, taking rows as %d (same as columns of matrix 1)\n", cols1);
    rows2 = cols1;
    printf("Enter columns for matrix 2: ");
    scanf("%d", &cols2);

    int mat2[100][100], result[100][100];
    printf("Enter values for matrix 2:\n");
    take_input(mat2, rows2, cols2);

    multiply_matrices(mat1, rows1, cols1, mat2, rows2, cols2, result);

    printf("Result matrix is:\n");
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            printf("%11d", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}

/* Output:
Enter rows and columns for matrix 1: 1 2
Enter values for matrix 1:
[0][0] : 1
[0][1] : 2
For matrix 2, taking rows as 2 (same as columns of matrix 1)
Enter columns for matrix 2: 3
Enter values for matrix 2:
[0][0] : 1
[0][1] : 2
[0][2] : 3
[1][0] : 4
[1][1] : 5
[1][2] : 6
Result matrix is:
          9         12         15
*/