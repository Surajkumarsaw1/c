#include <stdio.h>

int main() {
    int num, isPrime = 1;

    //Prompt user to enter a number
    printf("Enter a number : ");
    scanf("%d",&num);

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

    return 0;
}

// Sample output:
// Enter a number : 17
// 17 is a Prime number.