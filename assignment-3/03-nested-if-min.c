#include <stdio.h>

int main() {
    int num1, num2, num3;
    printf("Enter three numbers: ");
    scanf("%d%d%d", &num1, &num2, &num3);
    if(num1 > num2 && num1 > num3) {
        printf("The largest number is %d.\n", num1);
    }
    else if(num2 > num1 && num2 > num3) {
        printf("The largest number is %d.\n", num2);
    }
    else {
        printf("The largest number is %d.\n", num3);
    }
    return 0;
}

// Input: 20 50 30
// Output: The largest number is 50.