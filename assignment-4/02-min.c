#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter side lengths of a triangle : ");
    scanf("%d%d%d", &a, &b, &c);

    // Checking if the triangle is valid or not
    if (a + b > c && b + c > a && a + c > b) {
        printf("Valid triangle.\n");

        // Checking the type of triangle
        if (a == b && b == c) {
            printf("Equilateral triangle.");
        }
        else if (a == b || b == c || c == a) {
            printf("Isosceles triangle.");
        }
        else {
            printf("Scalene triangle.");
        }
    }
    else {
        printf("Invalid triangle.\n");
    }
    return 0;
}

// Output:
// Enter side lengths of a triangle : 3 4 5
// Valid triangle.
// Scalene triangle.