#include <stdio.h>

int main() {
    int n = 3;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("[%d][%d]\t", i, j);
        }
        printf("\n");
    }

    // Expected Output:
    /*
    [0][0]	[0][1]	[0][2]
    [1][0]	[1][1]	[1][2]
    [2][0]	[2][1]	[2][2]   
    */

    return 0;
}