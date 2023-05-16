#include <stdio.h>
#include <math.h>

int main() {
    int a, n;
    printf("\nS = 1 + 2^2/ a + 3^3/ a^2+ ...... to n terms\n");
    printf("Enter the value of a and n : ");
    scanf("%d%d", &a, &n);
    float s = 0;

    for (int i = 1; i <= n; i++) {
        s += pow(i, i) / (pow(a, i - 1));
    }

    printf("\nSum of the Series : %f\n", s);
    return 0;
}
// Sample Output :
// S = 1 + 2^2/ a + 3^3/ a^2+ ...... to n terms
// Enter the value of a and n : 2 4
// Sum of the Series : 49.000000