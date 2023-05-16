#include <stdio.h>

void sum(int a[], int n);

int main() {
    int a[10];
    printf("Enter 10 numbers: ");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
    }
    sum(a, 10);
    return 0;
}

void sum(int a[], int n) {
    int s = 0;
    for (int i = 0; i < n; i++) {
        s += a[i];
    }
    printf("Result: %d\n", s);
}

// Expected Output:
// Enter 10 numbers: 1 2 3 4 5 6 7 8 9 10
// Result: 55