/*
Write a menu driven C program to accept a number from the user and check whether it is a Palindrome or a Perfect number.
(a) Palindrome number: (A number is a Palindrome which when read in reverse order is same as in the right order)
Example: 11, 101, 151 etc.
(b) Perfect number: (A number is called Perfect if it is equal to the sum of its factors other than the number itself.)
Example: 6 = 1 + 2 + 3
*/

#include <stdio.h>

int main() {
    int op, num;

    printf("Enter a number : ");
    scanf("%d",&num);

    printf("Option for checking : \n\t");
    printf("1. Palindrome number\n\t");
    printf("2. perfect number\n\n\t");
    printf("Enter option : ");
    scanf("%d",&op);

    switch (op)
    {
    case 1:
        int rev=0, diff=0, temp=0;
	
        temp = num;
        
        //while ( (temp%10 != 0 ) || (temp/10 != 0)){
        while( temp != 0 ){
        	rev = rev*10 + temp%10;
        	temp /= 10;
        }
        //printf("Reversed number : %d\n",rev);
        
        if ( num == rev){
        	printf("\nPalindrome Number.\n");
        }
        else {
            printf("\nNot palindrome Number.\n");
        }
        break;
    
    case 2:
        int hcf_sum = 0;
        for (int i = 1; i  < num; i++){
            if ( num % i == 0) {
                hcf_sum += i;
            }
        }
        if (hcf_sum == num){
            printf("Perfect number.\n");
        }
        else {
            printf("Not a perfect number.\n");
        }

    default:
        
        break;
    }
    return 0;
}

