/*
A special two-digit number is such that when the sum of its digits is added to the product of its digits, the result is equal to the original two-digit number.
Example: Consider the number 59.
               Sum of digits = 5 + 9 = 14
               Product of digits = 5 * 9 = 45
               Sum of the sum of digits and product of digits = 14 + 45 = 59
Write a program to accept a two-digit number. Add the sum of its digits to the product of its digits. If the value is equal to the number input, then display the message "Special 2 - digit number" otherwise, display the message "Not a special two-digit number".
*/

#include <stdio.h>

int main() {
    int num, sum=0, product=1, count=0;

    printf("Enter a two digit number : ");
    scanf("%d",&num);

    int n = num;
    while ( n != 0 ){
        count += 1;
        n /= 10;
    }

    if ( count == 2) {
        int temp = num;
        while (temp != 0){
            sum += temp%10;
            product *= temp%10;
            temp /= 10;
        }
        printf("Sum : %d\n", sum);
        printf("Product : %d\n", product);
        
        if ( (sum+product)== num){
            printf("Special 2 - digit number.\n");
        }
        else {
            printf("Not a special two-digit number.\n");
        }

    }
    else {
        printf("Not a two digit number.\n");
    }

    return 0;
}

/*
Output :

Enter a two digit number : 59
Sum : 14
Product : 45
Special 2 - digit number.
*/