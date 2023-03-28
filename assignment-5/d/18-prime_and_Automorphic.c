/*
Write a menu driven C program to accept a number from the user and check whether it is a Prime number or an Automorphic number.
(a) Prime number: (A number is said to be prime, if it is only divisible by 1 and itself)
Example: 3,5,7,11
(b) Automorphic number: (Automorphic number is the number which is contained in the last digit(s) of its square.)
Example: 25 is an Automorphic number as its square is 625 and 25 is present as the last two digits.
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
            // printf("sq = %d, tens = %d\t",sq,tens);
            // printf("sq/tens = %d\t",sq/tens );
            // printf("sq%%tens = %d\n",sq%tens);
            if (sq%tens == num){
                automorphic = 1;
                break;
            }
            tens *= 10;
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
