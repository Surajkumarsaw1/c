/*
Write a C program to store 20 numbers in a 1-Dimensional Array.
Now, display only those numbers that are perfect squares.
*/
#include <stdio.h>
#include <math.h>

int main()
{
    int i, j, n = 20, count = 0, perfect, sqrootInt;
    int arr[n];
    float sqroot;

    printf("Enter %d numbers : ", n);

    // takes input
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // count the number of perfect square
    for (i = 0; i < n; i++)
    {
        perfect = 0;
        sqroot = sqrt(i);
        sqrootInt = (int)sqroot / 1;

        if (sqrootInt == sqroot)
        {
            // printf("%d is a perfect square\n",i);
            count++;
        }
    }

    // create an array of perfect square
    int perfectSqares[count];
    count = 0;
    for (i = 0; i < n; i++)
    {
        perfect = 0;
        sqroot = sqrt(i);
        sqrootInt = (int)sqroot / 1;

        if (sqrootInt == sqroot)
        {
            // printf("%d is a perfect square\n",i);
            perfectSqares[count] = arr[i];
            count++;
        }
    }

    // printing result
    printf("Perfect Square : ");
    for (i = 0; i < count; i++)
    {
        printf("%d ", perfectSqares[i]);
    }
    printf("\n");

    return 0;
}