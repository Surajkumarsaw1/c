#include <stdio.h>

int lcm(int a, int b);

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    printf("LCM of %d and %d is %d.\n", a, b, lcm(a, b));
    return 0;
}

int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int lcm(int a, int b) {
    static int multiple = 0;
    multiple += b;
    if ((multiple % a == 0) && (multiple % b == 0))
        return multiple;
    else
        return lcm(a, b);
}