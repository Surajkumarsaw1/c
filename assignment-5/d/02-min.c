#include <stdio.h>

int main() {
    int i, n1, n2, se=0, so=0;

    // Input lower and greater number
    printf("Enter lower number : ");
    scanf("%d",&n1);
    printf("Enter greater number : ");
    scanf("%d",&n2);

    // Loop through the numbers between n1 and n2
    for ( i = n1; i <= n2; i++ ){
        // Check if number is odd
        if ( i % 2 ){
            se += i;    // Add number to sum of even numbers if it is even
        }
        else {
            so += i;    // Add number to sum of odd numbers if it is odd
        }
    }

    // Print the sum of even and odd numbers
    printf("Sum of even numbers : %d\n",se);
    printf("Sum of odd numbers : %d\n",so);

    return 0;
}

// Output :
// Enter lower number : 5
// Enter greater number : 15
// Sum of even numbers : 45
// Sum of odd numbers : 60