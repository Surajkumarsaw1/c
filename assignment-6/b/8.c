// Write a C program to perform scalar matrix multiplication.


#include <stdio.h>

int main() {
    int row, col;
    printf("Enter rows  and column of matrix : ");
    scanf("%d%d", &row, &col);

    int mat1[row][col], num, result[row][col];

    printf("Enter value of matrix 1\n");
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            printf("[%d][%d] : ",i, j);
            scanf("%d",&mat1[i][j]);
        }
    }

    printf("Enter scalar value to multiply : ");
    scanf("%d",&num);

    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            result[i][j] = mat1[i][j] * num;
        }
    }

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
Enter scalar value to multiply : 7
          7         14
         21         28
*/