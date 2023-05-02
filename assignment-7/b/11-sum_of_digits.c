/*
Write a C program to find the sum of digits of a number using function.
*/

#include <stdio.h>

int sumdigit(int *);

int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    printf("Number of digits in %d = %d\n", n, sumdigit(&n));
    return 0;
}

int sumdigit(int *n)
{
    int num = *n;
    int sum = 0;
    while ((num) != 0)
    {
        sum += (num) % 10;
        (num) /= 10;
    }
    return sum;
}