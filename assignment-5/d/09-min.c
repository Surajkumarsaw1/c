#include <stdio.h>

int main() {
    int n1, n2, min, gcd;

    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);

    min = (n1 > n2) ? n2 : n1; // using ternary operator to find minimum of n1 and n2

    for (int i = 1; i <= min; i++) {
        if (n1 % i == 0 && n2 % i == 0) {
            gcd = i;
        }
    }

    printf("GCD: %d\n", gcd);
    return 0;
}

// Sample Output:
// Enter two numbers: 24 36
// GCD: 12

// Enter two numbers: 7 13
// GCD: 1