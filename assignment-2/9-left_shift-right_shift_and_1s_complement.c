#include <stdio.h>

int main() {
    int num1, num2;
    printf("Enter the value of num1 and num2: ");
    scanf("%d%d",&num1,&num2);
    printf("num1 << num2 = %d\n",num1<<num2);
    printf("num1 >> num2 = %d\n",num1>>num2);
    printf("~num1 = %d\n",~num1);
    return 0;
}

// The left shift and right shift operators should not be used for negative numbers. 
// If the second operand(which decides the number of shifts) is a negative number, 
// it results in undefined behaviour in C. 
// For example results of both 1 <<- 1 and 1 >> -1 is undefined. 
// Also, if the number is shifted more than the size of the integer, 
// the behaviour is undefined. For example, 1 << 33 is undefined if integers are stored using 32 bits. 
// Another thing is, NO shift operation is performed if additive-expression(operand that decides no of shifts) is 0. 
