#include <stdio.h>

float sum(float, float);

int main() {
    float a, b;
    float (*fp)(float,float);
    fp = sum;
    printf("Enter two numbers : ");
    scanf("%f%f", &a, &b);
    printf("Sum of %0.2f + %.2f =  %.2f\n",a, b, fp(a,b));
    return 0;
}

float sum(float num1, float num2){
    float s;
    s = num1 + num2;
    return s;
}