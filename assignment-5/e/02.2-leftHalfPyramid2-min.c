#include <stdio.h>

int main() {
    // Prints a triangle shape using nested loops
    for (int i = 1; i <= 5; i++) {
        // Prints spaces before each row to form a triangle shape
        for (int j = 5 - i; j >= 1; j--) {
            printf("  ");
        }
        // Prints number sequence in reverse order for the current row
        for (int j = i; j >= 1; j--) {
            printf("%d ", j);
        }
        // Starts a new line after each row is printed
        printf("\n");
    }

    // Output:
    /*
          1
        2 1
      3 2 1
    4 3 2 1
  5 4 3 2 1
    */

    return 0;
}