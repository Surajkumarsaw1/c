#include <stdio.h>

void main() {
    int num1, num2;
    printf("Enter value of num1 and num2 : ");
    scanf("%d%d",&num1,&num2);
    num1 = num1 ^ num2;
    num2 = num1 ^ num2;
    num1 = num1 ^ num2;
    printf("num1 : %d\nnum2 : %d",num1,num2);
}


// 1101 
// 1011
// ----
// 0110 => not matching 

// 0110 | 0110
// 1101 | 1011
// ---- | ----
// 1011 | 1101

// 1000
// 0010
// ----
// 1010 => not matching

// 1010 | 1010
// 1000 | 0010
// ---- | ----
// 0010 | 1000