// Code to perform arithmetic operations on two numbers
#include <stdio.h>
#include <math.h>

// main function
int main()
{
    // taking input from user
    printf("Enter a number : ");
    int a;
    scanf("%d",&a);

    // displaying options
    printf("1. Square\n");
    printf("2. Cube\n");
    printf("3. Square root\n");
    printf("4. Cube root\n\n");
    printf("Enter your choice : ");
    int b;
    scanf("%d",&b);

    // performing appropriate operation based on input
    switch(b)
    {
        case 1:
            // finding and printing square of number
            printf("square=%d\n", a*a );
            break;
        case 2:
            // finding and printing cube of number
            printf("cube=%d\n", a*a*a );
            break;
        case 3:
            // finding and printing square root of number
            printf("square root=%f\n",sqrt(a));
            break;
        case 4:
            // finding and printing cube root of number
            printf("cube root=%f\n",cbrt(a));
            break;
        default:
            // if option entered is invalid
            printf("Invalid option.\n");
    }
    return 0;
}

// Output:
// Enter a number : 8
// 1. Square
// 2. Cube
// 3. Square root
// 4. Cube root
// Enter your choice : 2
// cube=512