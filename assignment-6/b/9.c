// Write a C program to multiply two matrices.

#include <stdio.h>

int main() {
    int row1, col1, row2, col2;
    printf("Enter rows  and column of matrix : ");
    scanf("%d%d", &row1, &col1);

    int mat1[row1][col1];

    printf("Enter value of matrix 1\n");
    for (int i = 0; i < row1; i++){
        for (int j = 0; j < col1; j++){
            printf("[%d][%d] : ",i, j);
            scanf("%d",&mat1[i][j]);
        }
    }

    printf("\nFor matrix 2 taking rows of matix 2 = columns of matrix 1\n");
    row2 = col1;
    printf("Enter column of matrix 2 : ");
    scanf("%d", &col2);

    printf("Enter value of matrix 2\n");
    int mat2[row2][col2], result[row1][col2];

    for (int i = 0; i < row2; i++){
        for (int j = 0; j < col2; j++){
            printf("[%d][%d] : ",i, j);
            scanf("%d",&mat2[i][j]);
        }
    }

    for (int i = 0; i < row1; i++){
        for (int j = 0; j < col2; j++){
            result[i][j] = 0;
                for(int q = 0; q < col1; q++){
                    // printf("\t\tmat1[%d][%d] = %d * mat2[%d][%d] = %d = %d\n",i,q,mat1[i][q], q,j,mat2[q][j], mat1[i][q]*mat2[q][j] );
                    result[i][j] += mat1[i][q] * mat2[q][j];
                }
        }
    }

    for (int i = 0; i < row1; i++){
        for (int j = 0; j < col2; j++){
            printf("%11d",result[i][j]);
        }
        printf("\n");
    }

    return 0;
}

/* Output
Enter rows  and column of matrix : 1 2
Enter value of matrix 1
[0][0] : 1
[0][1] : 2

For matrix 2 taking rows of matix 2 = columns of matrix 1
Enter column of matrix 2 : 3
Enter value of matrix 2
[0][0] : 1
[0][1] : 2
[0][2] : 3
[1][0] : 4
[1][1] : 5
[1][2] : 6
          9         12         15
*/