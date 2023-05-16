/*
Using a switch statement, write a menu driven program to:
1. Generate and display the first 10 terms of the Fibonacci series:
0, 1, 1, 2, 3, 5, 8, 13, 21, 34
The first two Fibonacci numbers are 0 and 1, and each subsequent number is the sum of the previous two.
2. Find the sum of the digits of an integer that is input.
Input: User will enter an option (1 or 2) and a value (n or an integer).

Outputs: 
For option 1, the program will print the first 10 terms of the Fibonacci series.
For option 2, the program will print the sum of the digits of the input integer.
For an incorrect choice, the program will display an error message.

*/

#include <stdio.h>

int main() 
{
    int op, n;

    printf("Options:\n");
    printf("1. Generate and display the first 10 terms of the Fibonacci series.\n");
    printf("2. Find the sum of the digits of an integer that is input.\n\n");
    printf("Enter option: ");
    scanf("%d", &op);

    switch (op)
    {
        case 1:
            n = 10;
            int f = 0, s = 1, next;

            printf("Fibonacci series:\n");
            for (int i = 0; i < n; i++)
            {
                printf("%d", f);
                if (i != n-1)
                {
                    printf(", ");
                }
                else
                {
                    printf("\n");
                }
                next = f + s;
                f = s;
                s = next;
            }
            break;

        case 2:
            int sum = 0, num;
            printf("Enter a number: ");
            scanf("%d", &n);
            num = n;

            while (n != 0)
            {
                sum += n%10;
                n /= 10;
            }
            printf("Sum of digits of %d: %d\n", num, sum);
            break;

        default:
            printf("Enter a valid option.\n");
            break;
    }

    return 0;
}