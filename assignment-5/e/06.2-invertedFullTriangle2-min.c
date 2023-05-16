//This program prints a pattern of numbers using nested loops

#include <stdio.h>

int main()
{
    for (int i = 1; i <= 5; i++) //For loop for iterating over rows
    {
        for (int j = 1; j < i; j++) //For loop for printing spaces before numbers
            printf("  ");
        
        for (int j = 1; j <= 2 * (5 - i) + 1; j++) //For loop for printing the numbers
            printf("%d ", j);
        
        printf("\n"); //Printing a new line after each row
    }
    
    return 0; //Returning 0 to indicate successful execution of program
}

//Expected Output:

//1 2 3 4 5 6 7 8 9
//  1 2 3 4 5 6 7
//    1 2 3 4 5
//      1 2 3
//        1