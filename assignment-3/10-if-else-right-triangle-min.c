#include <stdio.h>

int is_valid_triangle(int a, int b, int c) {
    return ((a + b > c) && (b + c > a) && (c + a > b));
}

int is_right_triangle(int a, int b, int c) {
    return ((a*a+b*b == c*c) || (b*b+c*c == a*a) || (c*c+a*a == b*b));
}

int main() {
    int a, b, c;
    printf("Enter three sides of triangle: ");
    scanf("%d%d%d", &a, &b, &c);
    if (is_valid_triangle(a, b, c)) {
        printf("Valid triangle.\n");
        if (is_right_triangle(a, b, c)) {
            printf("Right triangle.\n");
        }
        else {
            printf("Not a right triangle.\n");
        }
    }
    else {
        printf("Invalid triangle.\n");
    }
    return 0;
}

// Input: 3 4 5
// Output: Valid triangle.
//         Right triangle.