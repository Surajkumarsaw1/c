#include <stdio.h>

int main() {
    int p, q;
    printf("Enter two numbers p and q (p<q) : ");
    scanf("%d%d", &p, &q);

    for (int i = p; i <= q; i++) { // loop from p to q (including q)
        if (i % 7 == 0 || i % 10 == 7) { // check if the number is divisible by 7 or has 7 in its unit digit
            printf("Buzz number : %d\n", i); // print the number as Buzz number
        }
    }
    return 0; // indicate successful completion of program
}

// Sample Output:
// Enter two numbers p and q (p<q) : 1 50
// Buzz number : 7
// Buzz number : 14
// Buzz number : 17
// Buzz number : 21
// Buzz number : 27
// Buzz number : 28
// Buzz number : 35
// Buzz number : 37
// Buzz number : 42
// Buzz number : 47