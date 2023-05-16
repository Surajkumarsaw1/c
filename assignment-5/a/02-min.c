/*
1, 2, 4, 7, 11, ………….
*/

#include <stdio.h>

int main() {
    int sum = 1;
    printf("%d, ", sum); // Printing the first term
    for (int i = 1; i < 10; i++) { // Starting from the second term
        sum += i;
        printf("%d, ", sum); // Printing every term except the last one
    }
    printf("%d\n", sum + 9); // printing the last term and newline character
    return 0;
}
/*
1, 2, 4, 7, 11, 16, 22, 29, 37, 46
*/