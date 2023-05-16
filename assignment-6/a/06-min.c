#include <stdio.h>

int main() {
    int i, n = 10;
    int totalmarks[] = {95, 80, 70, 60, 85, 94, 87, 75, 62, 79}; // Input array

    int sum = 0;
    float avg, deviation[n];

    for (i = 0; i < n; ++i) {
        sum += totalmarks[i];
    }

    avg = sum / n; // Average calculation

    for (i = 0; i < n; ++i) {
        deviation[i] = totalmarks[i] - avg; // Deviation calculation
    }

    printf("Average : %f\n", avg);
    printf("Deviation : ");
    for (i = 0; i < n; ++i) {
        printf("%.2f ", deviation[i]);
    }
    printf("\n");

    return 0;
}
// Average : 78.000000
// Deviation : 17.00 2.00 -8.00 -18.00 7.00 16.00 9.00 -3.00 -16.00 1.00    