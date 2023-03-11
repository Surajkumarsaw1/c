#include <stdio.h>

void main() {
    int a ,b, c ;
    printf("Enter a number : ");
    scanf("%d",&a);
    if (a % 2 == 0){
            printf("Even\n");
    }
    if (a % 2 != 0) {
        printf("Odd\n");
    }
}