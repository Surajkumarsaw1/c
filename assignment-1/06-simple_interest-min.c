#include <stdio.h>

int main() {
    float p, t, r;
    printf("Enter principle amount: ");
    scanf("%f", &p);
    
    printf("Enter time: ");
    scanf("%f", &t);
    
    printf("Enter rate: ");
    scanf("%f", &r);
    
    printf("Simple Interest: %f\n", (p * t * r) / 100);

    return 0;
}
// Sample Output:
// Enter principle amount: 1250
// Enter time: 2.5
// Enter rate: 3
// Simple Interest: 93.750000