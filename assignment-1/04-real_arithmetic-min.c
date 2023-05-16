#include <stdio.h>

int main() {
    float a, b;
    printf("Enter real value for a and b: ");
    scanf("%f%f", &a, &b);
    
    printf("Sum = %f\n", a + b);
    printf("Difference = %f\n", a - b);
    printf("Multiply = %f\n", a * b);
    printf("Divide = %f\n", a / b);

    return 0;
}
// Sample Output:
// Enter real value for a and b: 9.8 4.6
// Sum = 14.400000
// Difference = 5.200000
// Multiply = 45.080002
// Divide = 2.130435