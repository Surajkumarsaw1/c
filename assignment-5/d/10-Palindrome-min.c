#include <stdio.h>

int main() {
    //initializing variables
    int num, rev = 0, temp;

    //getting user input
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;

    //reversing the number
    while (temp != 0) {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }

    //checking if number is palindrome or not
    if (num == rev) {
        printf("%d is a Palindrome Number\n", num);
    } else {
        printf("%d is Not a Palindrome Number\n", num);
    }
    return 0;
}

//Sample Output
//Enter a number: 1221
//1221 is a Palindrome Number