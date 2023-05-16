/*
Write a C program to check whether a number is palindrome or not using function.
*/

#include <stdio.h>

int is_palindrome(int num);

int main()
{
    int num;
    
    // Taking user input for a number
    printf("Enter a number : ");
    scanf("%d", &num);
    
    // Checking whether the number is palindrome or not using is_palindrome function
    if (is_palindrome(num))
    {
        printf("%d is a palindrome number.\n", num);
    }
    else
    {
        printf("%d is not a palindrome number.\n", num);
    }
    
    return 0;
}

// Function to reverse the given number
int reverse(int num, int temp)
{
    if (num == 0)
    {
        return temp;
    }
    else
    {
        return reverse(num / 10, temp * 10 + num % 10); // Reversing recursively
    }
}

// Function to check whether the given number is palindrome or not
int is_palindrome(int num)
{
    if (num == reverse(num, 0)) // If the given number is equal to its reverse
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

// Output:
// Enter a number : 12321
// 12321 is a palindrome number.