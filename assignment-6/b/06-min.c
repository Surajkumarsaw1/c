/*
Write a C program to add two matrices.
*/
#include <stdio.h>

int main() {
    // get the number of rows and columns for matrices
    int row, col;
    printf("Enter rows  and column of matrix : ");
    scanf("%d%d", &row, &col);

    // declare the matrices
    int mat1[row][col], mat2[row][col], result[row][col];

    // get values for matrix 1
    printf("Enter value of matrix 1\n");
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            printf("[%d][%d] : ",i, j);
            scanf("%d",&mat1[i][j]);
        }
    }

    // get values for matrix 2
    printf("Enter value of matrix 2\n");
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            printf("[%d][%d] : ",i, j);
            scanf("%d",&mat2[i][j]);
        }
    }

    // add two matrices and store it in result matrix
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

    // print the result matrix
    printf("The sum of the two matrices is:\n");
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            printf("%11d",result[i][j]);
        }
        printf("\n");
    }

    return 0;
}

/* Output
Enter rows  and column of matrix : 2 2
Enter value of matrix 1
[0][0] : 1
[0][1] : 2
[1][0] : 3
[1][1] : 4
Enter value of matrix 2
[0][0] : 0
[0][1] : 9
[1][0] : 7
[1][1] : 6
The sum of the two matrices is:
          1         11
         10         10
*/