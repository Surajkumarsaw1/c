/*
Write a C program to calculate the factorial of a number using function.
*/

#include <stdio.h>

int factorial(int *);

int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    printf("%d! = %d\n", n, factorial(&n));
    return 0;
}

int factorial(int *num)
{
    int product = 1;

    for (int i = 1; i <= (*num); i++)
    {
        product *= i;
    }

    return product;
}