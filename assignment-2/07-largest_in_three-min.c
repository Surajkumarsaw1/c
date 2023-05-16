#include <stdio.h>

int main() {
    int num1, num2, num3;
    printf("Enter value of num1, num2, and num3: ");
    scanf("%d%d%d", &num1, &num2, &num3);
    
    //find and print the maximum number using ternary operator
    printf("The maximum number is: %d\n", (num1 > num2 ? (num1 > num3 ? num1 : num3) : (num2 > num3 ? num2 : num3)));
    return 0;
}

/*
Sample Input/Output:
Enter value of num1, num2, and num3: 10 20 30
The maximum number is: 30
*/