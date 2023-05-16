#include <stdio.h>

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    printf("GCD of %d and %d is %d.\n", a, b, gcd(a, b));
    return 0;
}

// Output:
// Enter two numbers: 25 35
// GCD of 25 and 35 is 5.