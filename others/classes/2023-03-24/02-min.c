#include <stdio.h>

int main() {
    int init = 65, end = 69;
    for (int i = init; i <= end; i++) {
        for (int j = init; j <= i; j++) {
            printf("%c ", j);
        }
        printf("\n");
    }

    // Expected Output:
    /*
    A
    A B
    A B C
    A B C D
    A B C D E
    */

    return 0;
}