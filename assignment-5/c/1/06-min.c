//This program calculates the sum of the series: (1*2) + (2*3) + ...... + (19*20)

#include <stdio.h>

int main()
{
    int i;
    float s = 0;
    
    //Printing the message for the series calculation
    printf("\nS = (1*2) + (2*3) + ...... + (19*20) \n");
    
    //For loop for calculating the sum of the series
    for (i = 1; i <= 19; i++)
    {
        s += i * (i + 1);
    }
    
    //Printing the calculated sum of the series
    printf("\nSum of the Series : %f \n", s);
    
    return 0; //Returning 0 to indicate successful execution of program
}

//Expected Output:
//S = (1*2) + (2*3) + ...... + (19*20) 
//Sum of the Series : 6700.000000