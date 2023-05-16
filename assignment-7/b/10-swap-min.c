/*
Write a C program to swap two numbers using function.
*/

#include <stdio.h>

void swap(float *pointerA, float *pointerB);

int main() {
    float num1, num2;
    
    // Taking user input for two numbers
    printf("Enter two numbers : ");
    scanf("%f%f", &num1, &num2);
    
    // Swapping the numbers using swap function
    swap(&num1, &num2);
    
    // Printing the result after swapping the numbers
    printf("After swapping:\nnum1 = %f, num2 = %f\n", num1, num2);
    
    return 0;
}

// Function to swap two numbers
void swap(float *pointerA, float *pointerB){
    float temp; // To hold the value while swapping
    
    temp = *pointerA;  // Storing the value of num1 to temp
    *pointerA = *pointerB; // Storing the value of num2 to num1
    *pointerB = temp; // Storing the value of temp to num2
}

// Output:
// Enter two numbers : 3.5 2.7
// After swapping:
// num1 = 2.700000, num2 = 3.500000