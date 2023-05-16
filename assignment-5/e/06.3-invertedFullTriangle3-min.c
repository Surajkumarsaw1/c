//This program prints a pattern of alphabets using nested loops

#include <stdio.h>

int main()
{
    for (int i = 1; i <= 5; i++) //For loop for iterating over rows
    {
        for (int j = 1; j < i; j++) //For loop for printing spaces before alphabets
            printf("  ");
        
        for (int j = 1; j <= 2 * (5 - i) + 1; j++) //For loop for printing the alphabets
            printf("%c ", j + 64); //Adding 64 to get the ASCII value of the corresponding alphabet
            
        printf("\n"); //Printing a new line after each row
    }
    
    return 0; //Returning 0 to indicate successful execution of program
}

//Expected Output:
//      A 
//    A B C 
//  A B C D E 
//A B C D E F G 
//A B C D E F G H I