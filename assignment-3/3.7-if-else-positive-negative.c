#include <stdio.h>

void main() {
    int a ;
    printf("Enter a number : ");
    scanf("%d",&a);
    if (a < 0){
            printf("Negative\n");
    }
    else{
        printf("Positive\n");
    }
}