#include <stdio.h>

// Function to calculate sum of two numbers
float sum(float *num1, float *num2){
    return (*num1 + *num2);
}

int main() {
    // Taking input from user
    float a, b;
    printf("Enter two numbers : ");
    scanf("%f %f", &a, &b);
    
    // Displaying sum of two numbers 
    printf("Sum of %.2f + %.2f = %.2f\n", a, b, sum(&a, &b));
    
    return 0;
}

// Output:
// Enter two numbers : 5.6 2.3
// Sum of 5.60 + 2.30 = 8.90