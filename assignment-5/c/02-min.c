#include <stdio.h>

int main() {
    int t1 = 0, t2 = 1, tn, n = 10;

    // print first two terms
    printf("Fibonacci series up to 10th term: \n");
    printf("%d, %d, ", t1, t2);

    // print remaining terms
    for (int i = 3; i <= n; i++) {
        tn = t1 + t2;

        // print term
        if (i != n) {
            printf("%d, ", tn);
        }
        else {
            printf("%d", tn);
        }

        // update terms
        t1 = t2;
        t2 = tn;
    }
    
    return 0;
}

/*
Output:
Fibonacci series up to 10th term: 
0, 1, 1, 2, 3, 5, 8, 13, 21, 34
*/