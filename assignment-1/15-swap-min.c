// Code to swap values of two variables

#include <stdio.h>

// main function that takes input for two variables,
// swap the values of variables and output the values
int main() {
    
    // declaring variables for a, b and c
    int a, b, c;
    
    // taking input from user for a and b
    printf("Enter the value for a : ");
    scanf("%d", &a);
    printf("Enter the value for b : ");
    scanf("%d", &b);
    
    // swapping the values of a and b using a temporary variable c
    c = a;
    a = b;
    b = c;
    
    // displaying the value of a and b after swapping
    printf("a = %d\nb = %d\n", a, b);
    
    // return statement to return 0 to the compiler if the code runs successfully
    return 0;
}

// Output:
// Enter the value for a : 5
// Enter the value for b : 10
// a = 10
// b = 5