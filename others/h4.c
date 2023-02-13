#include <stdio.h>

int main() {
    int b,h;
    float ar;
    printf("\nEnter base of triangle = ");
    scanf("%d",&b);
    printf("Enter height = ");
    scanf("%d",&h);
    ar = 0.5*b*h;
    printf("The area is %f",ar);
    return 0;
}