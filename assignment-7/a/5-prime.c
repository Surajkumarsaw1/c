/*
Write a C program to check whether a number is prime or not using function.
*/

#include <stdio.h>

int ifprime(int);

int main() {
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    ifprime(n);
    return 0;
}

int ifprime(int num) {
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

    return prime;
}