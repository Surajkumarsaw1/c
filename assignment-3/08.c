#include <stdio.h>
#include <math.h>

void main() {
    int a, b, c;
    float D, x1, x2;
    printf("Enter coefficient of x^2, x and constant : ");
    scanf("%d%d%d",&a,&b,&c);

    D = (b*b)-(4*a*c);
    // printf("%f",D);

    if ( D >= 0 ){
        x1 = (-b + sqrt(D))/2*a;
        x2 = (-b - sqrt(D))/2*a;
        printf("x1 : %f, x2 : %f\n",x1,x2);
    }
    else {
        printf("Non real roots.\n");
    }
}