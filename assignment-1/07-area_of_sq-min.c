#include <stdio.h>

int main() {
    float a;
    printf("Enter the length of side of square: ");
    scanf("%f", &a);
    
    printf("Area: %f\n", a * a);
    printf("Perimeter: %f\n", 4 * a);

    return 0;
}
// Sample Output:
// Enter the length of side of square: 7.5
// Area: 56.250000
// Perimeter: 30.000000