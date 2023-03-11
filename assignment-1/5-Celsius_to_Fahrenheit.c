#include <stdio.h>

void main() {
    float t;
    printf("Enter the temperature in Celsius :");
    scanf("%f",&t);
    printf("Temperature in Fahrenheit : %f\n", (t*9/5)+32);
}