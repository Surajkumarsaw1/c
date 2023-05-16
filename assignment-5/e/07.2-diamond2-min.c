//This program prints a diamond pattern of numbers using nested loops

#include <stdio.h>

int main()
{
    int rows = 10;
    int row_ = rows / 2;

    //For loop for printing the upper half of the diamond
    for (int i = 1; i <= row_; i++)
    {
        for (int j = row_ - i; j >= 1; j--) //For loop for printing spaces before numbers
            printf("  ");
        
        for (int j = 1; j <= 2 * i - 1; j++) //For loop for printing the numbers
            printf("%d ", j);
        
        printf("\n"); //Printing a new line after each row
    }

    //For loop for printing the lower half of the diamond
    for (int i = 1; i <= row_ - 1; i++)
    {
        for (int j = 1; j <= i; j++) //For loop for