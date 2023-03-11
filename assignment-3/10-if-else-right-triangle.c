#include <stdio.h>
#include <math.h>

void main() {
    int a, b, c;
    float D, x1, x2;
    printf("Enter three side of triangle : ");
    scanf("%d%d%d",&a,&b,&c);

    if ( ((a+b) > c) && ((b+c) > a) && ((c+a) > b) ){
        printf("Valid triangle.\n");
        if ( ((a*a+b*b) == c*c) || ((b*b+c*c) == a*a) || ((c*c+a*a) == b*b) ){
            printf("Right triangle.\n");
        }
        else{
            printf("Not a right triangle.\n");
        }
    }
    else {
        printf("Invalid triangle.\n");
    }
}