/*
Write a C program to swap two numbers using function.
*/

#include <stdio.h>

void swap(float *, float *);

int main() {
    float a,b;
    printf("Enter two numbers : ");
    scanf("%f%f", &a, &b);
    swap(&a, &b);
    printf("After swap:\na = %f, b = %f\n",a,b);
    return 0;
}


void swap(float *pointerA, float *pointerB){
    // printf("%p, %p\n", pointerA, pointerB);
    float c;
    c = *pointerA; // *a gives value in varible a; c = a
    *pointerA = *pointerB;
    *pointerB = c;
}