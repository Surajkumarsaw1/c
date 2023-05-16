#include <stdio.h>
#include <math.h>

int main() {
    for (int i = 1; i <= 10; i++) { // Starting from first term
        int num = pow(2 * i, 2);
        printf("%d", num);
        if (i != 10) {
            printf(", "); // Comma after every number except last
        }
        else {
            printf("\n"); // Newline after last number
        }
    }
    return 0;
}

/*
4, 16, 36, 64, 100, 144, 196, 256, 324, 400
*/