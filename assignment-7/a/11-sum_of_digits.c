/*
Write a C program to find the sum of digits of a number using function.
*/

#include <stdio.h>

int sumdigit(int);

int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    printf("Number of digits in %d = %d\n", n, sumdigit(n));
    return 0;
}

int sumdigit(int n)
{
    int sum = 0;
    while (n != 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}