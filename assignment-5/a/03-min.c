/*
3, 6, 9, 12, ……………..
*/

#include <stdio.h>

int main() {
    for (int i = 1; i <= 9; i++) { // loop runs 9 times because last number needs to be printed without comma
        printf("%d, ", 3 * i);
    }
    printf("%d\n", 3 * 10); // Last term of series printed with newline character
    return 0;
}

/* Output
3, 6, 9, 12, 15, 18, 21, 24, 27, 30
*/