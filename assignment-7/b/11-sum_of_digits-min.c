/*
Write a C program to find the sum of digits of a number using function.
*/

#include <stdio.h>

int sumdigit(int *);

int main()
{
    int num;
    
    // Taking user input for a number
    printf("Enter a number : ");
    scanf("%d", &num);
    
    // Finding the sum of digits using sumdigit function and printing the result
    printf("The sum of digits in %d = %d\n", num, sumdigit(&num));
    
    return 0;
}

// Function to find the sum of digits of given number
int sumdigit(int *n)
{
    int number = *n; // Copying the number to local variable
    int sum = 0;
    
    // Loop to find the sum of digits
    while (number != 0)
    {
        sum += number % 10; // Adding the last digit to sum
        number /= 10; // Removing the last digit from number
    }
    
    return sum;
}

// Output:
// Enter a number : 2453
// The sum of digits in 2453 = 14