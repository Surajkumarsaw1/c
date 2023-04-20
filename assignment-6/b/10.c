// Write a C program to find sum of main diagonal elements of a matrix.

#include <stdio.h>

int main() {
    int row, col;
    printf("Enter rows of square matrix : ");
    scanf("%d", &row);

    int mat[row][row], sum=0;

    printf("Enter value of matrix \n");
    for (int i = 0; i < row; i++){
        for (int j = 0; j < row; j++){
            printf("[%d][%d] : ",i, j);
            scanf("%d",&mat[i][j]);
        }
    }

    for (int i = 0; i < row; i++){
        for (int j = 0; j < row; j++){
            if ( i == j){
                sum += mat[i][j];
            }
        }
    }

    printf("Sum of diagonal elements : %d\n",sum);

    return 0;
}

/* Output
Enter rows of square matrix : 3
Enter value of matrix 
[0][0] : 1
[0][1] : 2
[0][2] : 3
[1][0] : 4
[1][1] : 5
[1][2] : 6
[2][0] : 7
[2][1] : 8
[2][2] : 9
Sum of diagonal elements : 15
*/
