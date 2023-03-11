#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter three side of triangle : ");
    scanf("%d%d%d",&a,&b,&c);

    if ( ((a+b) > c) && ((b+c) > a) && ((c+a) > b) ){
        printf("Valid triangle.\n");
        if ( (a == b) && (b == c) ){
            printf("Equilateral triangle.");
        }
        else if (( a == b) || (b == c) || (c == a)){
            printf("Isosceles triangle.");
        }
        else {
            printf("Scalar trinangle.");
        }
    }
    else {
        printf("Invalid triangle.\n");
    }
    return 0;
}