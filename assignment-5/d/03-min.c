#include <stdio.h>

int main() {
    int i, num, count=0;

    // Loop to take input for 15 numbers
    for ( i = 1; i <= 15; i++ ){
        printf("Enter number %d : ",i);
        scanf("%d",&num);
        // Check if number is divisible by 5 and ends with 0
        if ( num % 5 == 0 && num % 10 == 0 ){
            count++;    // Increment count if number ends with 0
        }
        // Print the number if it is divisible by 5 but doesn't end with 0