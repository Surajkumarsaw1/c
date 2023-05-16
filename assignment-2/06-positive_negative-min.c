#include <stdio.h>

int main() {
    int num;
    printf("Enter value of num: ");
    scanf("%d", &num);
    
    //check if the number is positive, negative or zero using ternary operator
    if(num > 0) {
        printf("The number is positive.\n");
    } else if(num < 0) {
        printf("The number is negative.\n");
    } else {
        printf("The number is zero.\n");
    }
    return 0;
}

/*
Sample Input/Output:
Enter value of num: -5
The number is negative.
*/