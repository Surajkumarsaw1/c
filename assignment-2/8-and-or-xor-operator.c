#include <stdio.h>

int main() {
    int num1, num2;
    printf("Enter the value of num1 and num2 : ");
    scanf("%d%d",&num1,&num2);
    printf("num1 & num2 = %d\n",num1&num2);
    printf("num1 | num2 = %d\n",num1|num2);
    printf("num1 ^ num2 = %d\n",num1^num2);
    return 0;
}