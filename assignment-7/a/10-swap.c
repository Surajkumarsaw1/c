/*
Write a C program to swap two numbers using function.
*/

#include <stdio.h>

void swap(float , float);

int main() {
    float a,b;
    printf("Enter two numbers : ");
    scanf("%f%f", &a, &b);
    swap(a, b);
    return 0;
}


void swap(float n1, float n2){
    float c;
    c = n1; 
    n1 = n2;
    n1 = c;
    printf("n1 = %f, n2 = %f", n1, n2);
}