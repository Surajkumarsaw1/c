/*
Write a menu driven C program to perform the following tasks by using Switch case statement:
(a) To print the series:
0, 3, 8, 15, 24, ............ to n terms. (value of 'n' is to be an input by the user)
(b) To find the sum of the series:
S = (1/2) + (3/4) + (5/6) + (7/8) + ........... + (19/20)
*/

#include <stdio.h>

int main() {
    int op, n;

    

    printf("Options : \n\t");
    printf("1. To print the series: 0, 3, 8, 15, 24, ............ to n terms. \n\t");
    printf("2. To find the sum of the series: S = (1/2) + (3/4) + (5/6) + (7/8) + ........... + (19/20)\n\n\t");
    printf("Enter option : ");
    scanf("%d",&op);

    printf("Enter value of n : ");
    scanf("%d",&n);

    switch (op)
    {
    case 1:
        for (int i = 1; i <= n; i++){
            if (i != n){
                printf("%d, ",(i*i)-1);
            }
            else{
                printf("%d\n",(i*i)-1);
            }
            
        }

        break;
    
    case 2:
        float sum = 0;
        for (int i = 1; i<=n; i++){
            sum = sum + (((float) i*2 )-1)/ (float) ( i*2 );
        }
        printf("Sum of above series upto %d terms is %f\n",n,sum);

        break;

    default:
        printf("Enter a valid option.\n");
        break;
    }
    return 0;
}
