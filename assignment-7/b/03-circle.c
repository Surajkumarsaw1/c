/*
Write a C program to find diameter, circumference and area of circle using functions.
*/

#include <stdio.h>

float diameter(float *);
float circumference(float *);
float area(float *);

int main() {
    float r;
    printf("Enter a numbers : ");
    scanf("%f", &r);
    printf("diameter =  %.2f\n", diameter(&r));
    printf("circumference =  %.2f\n", circumference(&r));
    printf("area =  %.2f\n", area(&r));
    return 0;
}

float diameter(float *r){
    float d;
    d = 2*(*r);
    return d;
}

float circumference(float *r){
    float c;
    c = 2*3.14*(*r);
    return c;
}

float area(float *r){
    float a;
    a = 3.14*(*r)*(*r);
    return a;
}