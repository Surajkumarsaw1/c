#include <stdio.h>

int main() {
    int n = 5;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%c ", 'A' + j);
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