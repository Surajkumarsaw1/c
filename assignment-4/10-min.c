// Code to calculate area, perimeter and diagonal of a rectangle
#include <stdio.h>
#include <math.h>

// main function
int main() {
    int l,b;

    // taking input from user
    printf("Enter length and breadth of rectangle : ");
    scanf("%d%d",&l,&b);

    // displaying options
    printf("1. Area\n");
    printf("2. Perimeter\n");
    printf("3. Diagonal\n");

    int op;
    
    // taking option input from user
    printf("Enter an option : \n");
    scanf("%d",&op);

    // performing appropriate operation based on input
    switch (op) {
        case 1:
            // calculating and printing area of rectangle
            printf("Area : %d\n", l*b);
            break;
        case 2:
            // calculating and printing perimeter of rectangle
            printf("Perimeter : %d\n", 2*(l+b));
            break;
        case 3:
            // calculating and printing diagonal of rectangle
            printf("Diagonal : %d\n", (int)sqrt((l*l)+(b*b))); // casting to int for whole number output
            break;
        default:
            // if option entered is invalid
            printf("Invalid option.\n");
    }

    return 0;
}

// Output:
// Enter length and breadth of rectangle : 4 5
// 1. Area
// 2. Perimeter
// 3. Diagonal
// Enter an option :
// 3
// Diagonal : 6