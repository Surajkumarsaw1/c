/*
Write a program to accept a number and check whether it is a 'Spy Number' or not. (A number is spy if the sum of its digits equals the product of its digits.)
Example: Sample Input: 1124
Sum of the digits = 1 + 1 + 2 + 4 = 8
Product of the digits = 1*1*2*4 = 8
*/

#include <stdio.h>

int main() {
    int num, sum=0, product=1, temp;
    scanf("%d",&num);
    temp = num;
    while ( temp != 0){
        sum += num%10;
        
        product *= num%10;

        printf("%d\t%d\n",sum,product);
        temp/=10;
    }
    printf("Sum = %d\nProduct = %d\n", sum, product);
    if ( sum ==  product){
        printf("%d is a Spy Number.\n",num);
    }
    else {
        printf("%d is not Spy Number.\n",num);
    }
    return 0;
}