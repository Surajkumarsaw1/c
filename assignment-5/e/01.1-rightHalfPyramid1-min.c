#include <stdio.h>

int main() {
    // loop for number of rows
    for (int i = 1; i <= 5; i++) {
        // loop for number of stars in each row
        for (int j =1; j <= i; j++) {
            printf("* ");
        }
        // print new line after each row
        printf("\n");
    }
    return 0; // prints:
    // *
    // * *
    // * * *
    // * * * *
    // * * * * * 
}