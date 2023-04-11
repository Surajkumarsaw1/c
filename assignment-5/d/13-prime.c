#include <stdio.h>

int main() {
    int num, prime=1;
    printf("Enter a number : ");
    scanf("%d",&num);

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
    return 0;
}