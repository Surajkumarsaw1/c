#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    // Comparing the two numbers and performing operations accordingly
    if (a == b) {
        printf("Both the numbers are equal");
    }
    else {
        int smaller = (a < b) ? a : b;
        int larger = (a > b) ? a : b;
        printf("Square of smaller number: %d\n", smaller * smaller);
        printf("Cube of larger number: %d\n", larger * larger * larger);
    }
    return 0;
}

// Output:
// Enter two numbers: 5 9
// Square of smaller number: 25
// Cube of larger number: 729