// Code to find volume and surface area of a rectangular cuboid

#include <stdio.h>

// main function that takes input for length, breadth and height of a cuboid
// and calculates the volume and surface area
int main() {
    
    // declaring variables for length, breadth and height
    float length, breadth, height;
    
    // taking input from user for length, breadth and height
    printf("Enter value of length, breadth and height : ");
    scanf("%f%f%f", &length, &breadth, &height);
    
    // calculating the volume and surface area of cuboid
    float volume = length * breadth * height;
    float surfaceArea = 2 * ((length*breadth) + (length*height) + (breadth*height));
    
    // displaying the result to the user
    printf("Volume : %f\n", volume);
    printf("Surface Area : %f\n", surfaceArea);
    
    // return statement to return 0 to the compiler if the code runs successfully
    return 0;
}

// Output:
// Enter value of length, breadth and height : 5 4 3
// Volume : 60.000000
// Surface Area : 94.000000