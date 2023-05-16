/*
Write a C program to reverse a number using function.
*/

#include <stdio.h>
#include <math.h>

int reverse(int);

int main()
{
    int num;
    
    // Taking user input for a number
    printf("Enter a number : ");
    scanf("%d", &num);
    
    // Reversing the number using reverse function and printing the result
    printf("%d\n", reverse(num));
    
    return 0;
}

// Function to reverse the given number
int reverse(int num)
{
    int count = 0, rev = 0, digit;
    int temp = num;
    
    // Count the number of digits
    while (temp != 0)
    {
        count++;
        temp /= 10;
    }
    
    temp = num;
    
    // Reverse the given number
    while (temp != 0)
    {
        digit = temp % 10;
        rev += digit * pow(10, count - 1);
        count--;
        temp /= 10;
    }
    
    return rev;
}

// Output:
// Enter a number : 245
// 542