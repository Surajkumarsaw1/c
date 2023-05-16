#include <stdio.h>
#include <math.h>

int main() {
    // calculate and print the series
    for (int i = 1; i <= 10; i++) {
        int num = pow(5 * i, 2) - 1;
        if (i != 10) {
            printf("%d, ", num);
        }
        else{
            printf("%d\n", num);
        }
    }

    return 0;
}

/*
Output:
24, 99, 224, 399, 624, 899, 1224, 1599, 2024, 2499
*/