#include <stdio.h>

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int lcm(int a, int b) {
    int multiple = (a * b) / gcd(a, b);
    return multiple;
}

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    printf("LCM of %d and %d is %d.\n", a, b, lcm(a, b));
    return 0;
}

// Output:
// Enter two numbers: 4 6
// LCM of 4 and 6 is 12.