/*
Write a C program to store 20 numbers in a 1- Dimensional Array.
Display the numbers which are prime.
*/
#include <stdio.h>

int main()
{
    int i, j, n = 20, count = 0, prime;
    int arr[n];

    printf("Enter %d numbers : ", n);

    // takes input
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // count the number of primes
    for (i = 0; i < n; i++)
    {
        prime = 1;
        for (j = 2; j <= (arr[i] / 2); j++)
        {
            if (arr[i] % j == 0)
            {
                prime = 0;
                break;
            }
        }
        if (prime == 1)
        {
            count++;
        }
    }

    // create an array of primes
    int primeArr[count];
    count = 0;
    for (i = 0; i < n; i++)
    {
        prime = 1;
        for (j = 2; j <= (arr[i] / 2); j++)
        {
            if (arr[i] % j == 0)
            {
                prime = 0;
                break;
            }
        }
        if (prime == 1)
        {
            primeArr[count] = arr[i];
            count++;
        }
    }

    // printing result
    printf("Prime numbers : ");
    for (i = 0; i < count; i++)
    {
        printf("%d ", primeArr[i]);
    }
    printf("\n");

    return 0;
}