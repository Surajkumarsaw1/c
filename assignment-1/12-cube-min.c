// Code to find volume and surface area of a cube

#include <stdio.h>

// main function that takes input for length of one side of a cube
// and calculates the volume and surface area
int main() {
    
    // declaring variable for length of one side
    float side;
    
    // taking input from user for length of one side
    printf("Enter length of one side of a cube : ");
    scanf("%f", &side);
    
    // calculating the volume and surface area of cube
    float volume = side * side * side;
    float surfaceArea = 6 * side * side;
    
    // displaying the result to the user
    printf("Volume : %f \nSurface Area : %f\n", volume, surfaceArea);
    
    // return statement to return 0 to the compiler if the code runs successfully
    return 0;
}

// Output:
// Enter length of one side of a cube : 5
// Volume : 125.000000
// Surface Area : 150.000000