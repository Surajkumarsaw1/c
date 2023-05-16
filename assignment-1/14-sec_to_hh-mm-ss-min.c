// Code to convert seconds to hours, minutes and seconds

#include <stdio.h>

// main function that takes input for seconds
// and calculates equivalent hours, minutes and seconds
int main() {
    
    // declaring variables for seconds, hours, minutes and seconds
    int seconds, hours, minutes, secsLeft;
    
    // taking input from user for seconds
    printf("Enter value in seconds : ");
    scanf("%d", &seconds);
    
    // calculating equivalent hours, minutes and seconds
    hours = seconds / 3600;
    secsLeft = seconds % 3600;
    minutes = secsLeft / 60;
    secsLeft = secsLeft % 60;
    
    // displaying the result to the user
    printf("%d h : %d m : %d s\n", hours, minutes, secsLeft);
    
    // return statement to return 0 to the compiler if the code runs successfully
    return 0;
}

// Output:
// Enter value in seconds : 10000
// 2 h : 46 m : 40 s