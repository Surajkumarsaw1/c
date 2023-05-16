//This program prints a pattern of stars using nested loops

#include <stdio.h>

int main()
{
    for (int i = 1; i <= 5; i++) //For loop for iterating over rows
    {
        for (int j = 1; j < i; j++) //For loop for printing spaces before stars
            printf("  ");
        
        for (int j = 1; j <= 2 * (5 - i) + 1; j++) //For loop for printing the stars
            printf("* ");
        
        printf("\n"); //Printing a new line after each row
    }
    
    return 0; //Returning 0 to indicate successful execution of program
}

//Expected Output:
//      * 
//    * * * 
//  * * * * * 
//* * * * * * * 
//* * * * * * * *