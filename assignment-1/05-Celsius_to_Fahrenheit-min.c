#include <stdio.h>

int main() {
    float t;
    printf("Enter the temperature in Celsius: ");
    scanf("%f", &t);
    
    printf("Temperature in Fahrenheit: %f\n", (t * 9 / 5) + 32);

    return 0;
}
// Sample Output:
// Enter the temperature in Celsius: 25.6
// Temperature in Fahrenheit: 78.080002