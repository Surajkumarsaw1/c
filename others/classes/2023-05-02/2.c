#include <stdio.h>

float sum(float *, float *);

int main() {
    float a, b;
    printf("Enter two numbers : ");
    scanf("%f%f", &a, &b);
    printf("Sum of %0.2f + %.2f =  %.2f\n",a, b, sum(&a,&b));
    return 0;
}

float sum(float *num1, float *num2){
    float s;
    s = *num1 + *num2;
    return s;
}