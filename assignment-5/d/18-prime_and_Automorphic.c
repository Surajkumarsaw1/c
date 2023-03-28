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
    printf("1. Prime number\n\t");
    printf("2. Automorphic number\n\n\t");
    printf("Enter option : ");
    scanf("%d",&op);

    switch (op)
    {
    case 1:
        int prime=1;
        // printf("Enter a number : ");
        // scanf("%d",&num);
    
        for (int i = 2; i < (num/2)+1; i++){
            if (num%i == 0){
                prime = 0;
                break;
            }
        }
    
        if (prime){
            printf("Prime number.\n");
        }
        else{
            printf("Not a prime number.\n");
        }
        break;
    
    case 2:
        int sq, tens=10, automorphic = 0;
        sq = num*num;

        while( sq/tens != 0){
            if (sq%tens == num){
                automorphic = 1;
                break;
            }
            tens += 10;
        }

        if (automorphic){
            printf("Automorphic number.\n");
        }
        else {
            printf("Not a Automorphic number.\n");
        }
        break;

    default:
        printf("Enter a valid option.\n");
        break;
    }
    return 0;
}
