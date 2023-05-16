#include <stdio.h>

int main() {
    int cno, unit;
    printf("Enter Consumer Number: ");
    scanf("%d", &cno);
    printf("Enter units: ");
    scanf("%d", &unit);

    printf("\nConsumer No: %d\n", cno);

    // Calculating the bill based on the units consumed
    if (unit > 500) {
        printf("Bill: %.2f", unit * 3.50);
    }
    else if (unit > 300) {
        printf("Bill: %.2f", unit * 2.80);
    }
    else if (unit > 100) {
        printf("Bill: %.2f", unit * 2.30);
    }
    else {
        printf("Bill: %.2f", unit * 1.80);
    }
    return 0;
}

// Output:
// Enter Consumer Number: 123
// Enter units: 400
// Consumer No: 123
// Bill: 1120.00