/*
1.5, 3.0, 4.5, 6.0, …………..
*/

#include <stdio.h>

int main() {
    float r = 0;
    for (int i = 1; i <= 10; i++) { // Starting from the first term
        r += 1.5;
        printf("%.1f", r);
        if (i != 10) {
            printf(", "); // Comma after every number except last
        }
        else {
            printf("\n"); // Newline after last number
        }
    }
    return 0;
}

/* Output
1.5, 3.0, 4.5, 6.0, 7.5, 9.0, 10.5, 12.0, 13.5, 15.0
*/