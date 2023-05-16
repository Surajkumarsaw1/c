#include <stdio.h>

int main() {
    int num, rev = 0, diff = 0, temp;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;

    while (temp != 0) { // loop until all digits are reversed
        rev = rev * 10 + temp % 10; // add the least significant digit to reversed number
        temp /= 10; // divide the number by 10 to discard the least significant digit
    }

    printf("Reversed number: %d\n", rev);

    diff = (rev > num) ? (rev - num) : (num - rev);
    printf("Absolute Difference = %d\n", diff);
    return 0;
}

// Sample Output:
// Enter a number: 1234
// Reversed number: 4321
// Absolute Difference = 3087

//Enter a number: 1470
//Reversed number: 741
//Absolute Difference = 729