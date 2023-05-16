// Code to find the roots of a quadratic equation
#include <stdio.h>
#include <math.h>

// main function
void main() {
    int a, b, c;
    float D, x1, x2;

    // taking input from user
    printf("Enter coefficient of x^2, x and constant : ");
    scanf("%d%d%d",&a,&b,&c);

    // calculating discriminant
    D = (b*b)-(4*a*c);

    // checking for real roots
    if ( D >= 0 ){
        // calculating roots
        x1 = (-b + sqrt(D))/2*a;
        x2 = (-b - sqrt(D))/2*a;
        
        // printing roots
        printf("x1 : %f, x2 : %f\n",x1,x2);
    }
    else {
        // if roots are imaginary
        printf("Non real roots.\n");
    }
}

// Output:
// Enter coefficient of x^2, x and constant : 1 -5 6
// x1 : 3.000000, x2 : 2.000000