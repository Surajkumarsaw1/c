#include <stdio.h>

int main() {
    int num1, num2, temp;
    printf("Enter value of num1 and num2: ");
    scanf("%d%d", &num1, &num2);
    
    //swap values
    temp = num1;
    num1 = num2;
    num2 = temp;
    
    //print values after swap
    printf("After swapping:\nnum1=%d\nnum2=%d", num1, num2);
    return 0;
}

/*
Sample Input/Output:
Enter value of num1 and num2: 10
20
After swapping:
num1=20
num2=10
*/