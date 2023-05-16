#include <stdio.h>

int fib(int n) {
    if (n == 1 || n == 2)
        return 1;
    return (fib(n - 1) + fib(n - 2));
}

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("The %dth Fibonacci term is %d.\n", n, fib(n));
    return 0;
}

// Output:
// Enter n: 6
// The 6th Fibonacci term is 8.