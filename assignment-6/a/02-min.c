#include <stdio.h>

int main() {
    float c[20], f[20];
    int n = 20;
    printf("Enter 20 numbers : ");
    for (int i = 0; i < n; i++) scanf("%f", &c[i]);
    for (int i = 0; i < n; i++) f[i] = ((9 / 5) * c[i]) + 32;
    for (int i = 0; i < n; i++) printf("%.2f°C = %.2f°F\n", c[i], f[i]);
    return 0;
}