#include <stdio.h>
#include <math.h>

void main() {
    int a;
    printf("Enter age : ");
    scanf("%d",&a);

    if ( a >= 18 ){
        printf("Eligible to vote.\n");
    }
    else {
        printf("Not eligible to vote.\n");
    }
}