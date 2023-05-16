#include <stdio.h>

int main() {
    int num1, num2;
    printf("Enter the value of num1 and num2: ");
    scanf("%d%d", &num1, &num2);
    
    //perform bitwise AND, OR, and XOR operations on num1 and num2 and print the results
    printf("num1 & num2 = %d\n", num1 & num2);
    printf("num1 | num2 = %d\n", num1 | num2);
    printf("num1 ^ num2 = %d\n", num1 ^ num2);
    return 0;
}

/*
Sample Input/Output:
Enter the value of num1 and num2: 5 9
num1 & num2 = 1
num1 | num2 = 13
num1 ^ num2 = 12
*/