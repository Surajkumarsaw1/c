// Code to calculate the area of a triangle

#include <stdio.h>

// main function that takes input for base and height
// and calculates the area of triangle
int main() {
    // declaring variables for base and height
    float base, height;
    
    // taking input from user for base and height
    printf("Enter the value of base and height : ");
    scanf("%f%f",&base,&height);
    
    // calculating the area of triangle using the formula
    float area = 0.5 * base * height;
    
    // displaying the result to the user
    printf("Area of triangle : %f\n", area);
    
    // return statement to return 0 to the compiler if the code runs successfully
    return 0;
}

// Output:
// Enter the value of base and height : 5 10
// Area of triangle : 25.000000