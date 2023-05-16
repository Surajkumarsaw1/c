/*
Prints whether a given number is even or odd.
*/

#include <stdio.h>

void evenOdd(int num) {
    if (num % 2 == 0) {
        printf("Even\n");
    } else {
        printf("Odd\n");
    }
}

int main() {
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);

    evenOdd(num);
    return 0;
}

/* Output
Enter a number : 11
Odd
*/