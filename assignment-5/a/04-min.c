/*
4, 8, 16, 32, ………….
*/

#include <stdio.h>
#include <math.h>

int main() {
    for (int i = 2; i <= 11; i++) { // Starting from 2nd term
        int r = pow(2, i);
        printf("%d", r);
        if (i != 11) {
            printf(", "); // Comma after every number except last
        }
        else {
            printf("\n"); // Newline character after last number
        }
    }
    return 0;
}

/* Output
4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048
*/