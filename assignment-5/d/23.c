/*
Write a program to input a number. Check and display whether it is a Niven number or not. (A number is said to be Niven which is divisible by the sum of its digits).
Example: Sample Input 126
Sum of its digits = 1 + 2 + 6 = 9 and 126 is divisible by 9.
*/

#include <stdio.h>

int main() {
    int num, sum = 0 , temp;
    printf("Enter a number : ");
    scanf("%d",&num);
    temp = num;
    printf("Sum of digits : ");
    for ( int count = 0; temp != 0; count++){
        printf("%d + ",temp%10);
        sum += temp%10;
        temp/=10;
    }
    printf("\b\b = %d\n",sum);
    if ( num%sum == 0){
        printf("%d is divisible by %d\n%d is niven number\n", num, sum, num);
    }
    else{
        printf("%d is not divisible by %d\n%d is not a niven number\n", num, sum, num);
    }
    
    return 0;
}