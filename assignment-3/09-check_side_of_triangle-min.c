// Code to check if given sides form a valid triangle
#include <stdio.h>

// main function
void main() {
    int a, b, c;

    // taking input from user
    printf("Enter three sides of triangle : ");
    scanf("%d%d%d",&a,&b,&c);

    // checking for valid triangle
    if ( ((a+b) > c) && ((b+c) > a) && ((c+a) > b) ){
        // if triangle is valid
        printf("Valid triangle.\n");
    }
    else {
        // if triangle is not valid
        printf("Invalid triangle.\n");
    }
}

// Output:
// Enter three sides of triangle : 3 4 5
// Valid triangle.