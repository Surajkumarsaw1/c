/*
Write a C program to check whether a number is palindrome or not using function.
*/

#include <stdio.h>

void palindrome(int);

int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    palindrome(n);
    return 0;
}

void palindrome(int num)
{
    int rev = 0, diff = 0, temp = 0;
    temp = num;

    while (temp != 0)
    {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }

    if (num == rev)
    {
        printf("Palindrome Number.\n");
    }
    else
    {
        printf("Not palindrome Number.\n");
    }
}