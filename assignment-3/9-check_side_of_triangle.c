#include <stdio.h>

void main() {
    int a, b, c;
    printf("Enter three side of triangle : ");
    scanf("%d%d%d",&a,&b,&c);

    if ( ((a+b) > c) && ((b+c) > a) && ((c+a) > b) ){
        printf("Valid triangle.\n");
    }
    else {
        printf("Invalid triangle.\n");
    }
}