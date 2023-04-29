#include <stdio.h>

void swap(float* a, float* b);
float* swap2(float a, float b);
float * swap2(float a, float b);

int main(){
    float num1, num2;
    float *result;
    printf("Enter two numbers ; ");
    scanf("%f%f", &num1, &num2);
    swap(&num1, &num2);
    // result = swap2(num1, num2);
    // // result = {5.000000, 3.000000}
    // num1 = result[0];
    // num2 = result[1];

    printf("%.1f and %.1f", num1, num2);
    return 0;
}

void swap(float* pointerA, float* pointerB){
    printf("%p, %p\n", pointerA, pointerB);
    float c;
    c = *pointerA; // *a gives value in varible a; c = a
    *pointerA = *pointerB;
    *pointerB = c;
}

float * swap2(float a, float b){
    float c;
    c = a;
    a = b;
    b = c;
    float d[] = {a, b};
    return d;
}