/*
Write a menu-driven C program to:
1. Print series 0, 3, 8, 15, 24, to n terms.
2. Find sum of series S = (1/2) + (3/4) + (5/6) + (7/8) + ... + (19/20)

Inputs: User will enter an option (1 or 2) and the value of n.

Outputs: 
For option 1, the program will print the series.
For option 2, the program will print the sum of the series.

*/

#include <stdio.h>

int main() 
{
    int op, n;
    float sum;
    
    printf("Options:\n");
    printf("1. To print the series: 0, 3, 8, 15, 24, ... to n terms.\n");
    printf("2. To find the sum of the series: S = (1/2) + (3/4) + (5/6) + (7/8) + ... + (19/20)\n\n");
    printf("Enter option: ");
    scanf("%d", &op);

    printf("Enter value of n: ");
    scanf("%d", &n);

    switch (op)
    {
        case 1:
            for (int i = 1; i <= n; i++)
            {
                printf("%d", (i*i) - 1);
                if (i != n)
                {
                    printf(", ");
                }
                else
                {
                    printf("\n");
                }
            }
            break;
    
        case 2:
            sum = 0;
            for (int i = 1; i <= n; i++)
            {
                sum += ((float)2*i - 1) / (float)2 * i;
            }
            printf("Sum of the series upto %d terms is %f\n", n, sum);
            break;

        default:
            printf("Enter a valid option.\n");
            break;
    }

    return 0;
}