#include <stdio.h>

int main() {
    int m, n, op, result=0, r;
    printf("Enter the two numbers m and n (m > n) : ");
    scanf("%d%d",&m, &n);

    // Display available operations
    printf("1. Add\n");
    printf("2. Multiply\n");
    printf("3. Division\n");

    // Prompt user to select an operation
    printf("Select operation : ");
    scanf("%d",&op);

    // Perform the selected operation and display the result
    switch (op){
        case 1:
            result = m + n;
            printf("Sum : %d\n",result);
            break;
        case 2:
            result = m * n;
            printf("\n\t %d x %d = %d\n",m,n,result);
            break;
        case 3:
            result = m / n;
            r = m % n;
            printf("Quotient : %d, Remainder : %d\n",result,r);
            break;
        default:
            printf("Invalid operation selected.");
    }

    return 0;
}

// Sample Output:
// Enter the two numbers m and n (m > n) : 10 3
// 1. Add
// 2. Multiply
// 3. Division
// Select operation : 3
// Quotient : 3, Remainder : 1