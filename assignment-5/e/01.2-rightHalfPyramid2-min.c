#include <stdio.h>

int main() {
    // print the pattern
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}

/*
Output:
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
*/