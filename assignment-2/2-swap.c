#include <stdio.h>

void main() {
    int num1, num2;
    printf("Enter value of num1 and num2 : ");
    scanf("%d%d",&num1,&num2);
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
    printf("num1 : %d\nnum2 : %d",num1,num2);
}