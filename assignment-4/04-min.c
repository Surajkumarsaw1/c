#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter three different numbers: ");
    scanf("%d%d%d", &a, &b, &c);

    // Finding the second smallest number among the three
    if ((a > b && a < c) || (a > c && a < b)) {
        printf("Second smallest number: %d", a);
    }
    else if ((b > a && b < c) || (b > c && b < a)) {
        printf("Second smallest number: %d", b);
    }
    else {
        printf("Second smallest number: %d", c);
    }
    return 0;
}

// Output:
// Enter three different numbers: 9 4 6
// Second smallest number: 6