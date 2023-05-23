#include <stdio.h>

int isPrime(int num);

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    float (*fp)(int);
    fp = isPrime;
    if (fp(n)) {
        printf("Prime number.\n");
    } else {
        printf("Not a prime number.\n");
    }

    return 0;
}

int isPrime(int num) {
    if (num < 2) {
        return 0;
    }

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }

    return 1;
}