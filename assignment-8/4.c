#include <stdio.h>

void evenOdd(int num);

int main() {
    int num;
    float (*fp)(int);
    fp = evenOdd;
    printf("Enter a number: ");
    scanf("%d", &num);

    fp(num);
    return 0;
}

void evenOdd(int num) {
    printf(num % 2 == 0 ? "Even\n" : "Odd\n");
}