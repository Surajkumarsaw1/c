#include <stdio.h>

int main() {
    int op, num;

    //Prompt user to enter a number
    printf("Enter a number : ");
    scanf("%d",&num);

    //Display menu options
    printf("Option for checking : \n\t");
    printf("1. Prime number\n\t");
    printf("2. Automorphic number\n\n\t");

    //Prompt user to select an option
    printf("Enter option : ");
    scanf("%d",&op);

    switch (op)
    {
        case 1:
        {
            int isPrime = 1;

            //Check if the number is prime or not
            for(int i = 2; i <= num/2; i++)
            {
                if(num % i == 0)
                {
                    isPrime = 0;
                    break;
                }
            }

            //Display the result
            if(isPrime)
                printf("%d is a Prime number\n", num);
            else
                printf("%d is not a Prime number\n", num);
            break;
        }
        case 2:
        {
            int sq = num * num, tens = 10, automorphic = 0;

            //Check if the number is automorphic