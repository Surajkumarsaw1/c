#include <stdio.h>
#include <math.h>

int main() {
    int a, n;
    printf("\nS = a + a^2+ a^3+ ...... + a^n\n");
    printf("Enter the value of a and n : ");
    scanf("%d%d", &a, &n);
    float s = 0;

    for (int i = 1; i <= n; i++) {
        s += pow(a, i);
    }

    printf("\nSum of the Series : %f\n", s);
    return 0;
}
// Sample Output :
// S = a + a^2+ a^3+ ...... + a^n
// Enter the value of a and n : 2 5
// Sum of the Series : 62.000000