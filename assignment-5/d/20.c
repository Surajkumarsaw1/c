/*
Using a switch statement, write a menu driven program to:
(a) Generate and display the first 10 terms of the Fibonacci series
0, 1, 1, 2, 3, 5
The first two Fibonacci numbers are 0 and 1, and each subsequent number is the sum of the previous two.
(b) Find the sum of the digits of an integer that is input.
Sample Input: 15390
Sample Output: Sum of the digits = 18
For an incorrect choice, an appropriate error message should be displayed.
*/

#include <stdio.h>

int main() {
    int op, n;

    printf("Options : \n\t");
    printf("1. Generate and display the first 10 terms of the Fibonacci series. \n\t");
    printf("2. Find the sum of the digits of an integer that is input.\n\n\t");
    printf("Enter option : ");
    scanf("%d",&op);

    switch (op)
    {
    case 1:
        n = 10;
        int f=0, s=1, next;

        for (int i = 0; i < n; i++){
            if ( i < 2) {
                printf("%d, ",i);
            }
            else {
                next = f + s;
                if ( i != 9){
                    printf("%d, ",next);
                }
                else{
                    printf("%d\n",next);
                }
                f = s;
                s = next;
            }
        }

        break;
    
    case 2:
        int sum = 0, num, count=0;
        printf("Enter a number : ");
        scanf("%d",&n);
        num = n;

        while ( n != 0){
            count += 1;
            sum +=  n%10;
            // printf("%d\n",sum);
            n /= 10;
        }
        printf("Sum of digits of %d : %d\n",num,sum);
        // printf("count : %d",count);
        break;

    default:
        printf("Enter a valid option.\n");
        break;
    }
    return 0;
}
