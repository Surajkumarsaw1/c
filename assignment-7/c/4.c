#include <stdio.h>

int fib(int n);

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("The %dth Fibonacci term is %d.\n", n, fib(n));
    return 0;
}

int fib(int n) {
    if (n == 1 || n == 2)
        return 1;
    else
        return (fib(n - 1) + fib(n - 2));
}