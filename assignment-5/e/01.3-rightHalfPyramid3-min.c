#include <stdio.h>

int main() {
    // loop for number of rows
    for (int i = 1; i <= 5; i++) {
        // loop for printing alphabets
        for (int j =1; j <= i; j++) {
            printf("%c ", j + 64);
        }
        // print new line after each row
        printf("\n");
    }
    return 0; // prints:
    // A
    // A B
    // A B C
    // A B C D
    // A B C D E
}