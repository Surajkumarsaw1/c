#include <stdio.h>

void main() {
    float p,t,r;
    printf("Enter principle amount: ");
    scanf("%f",&p);
    printf("Enter time : ");
    scanf("%f",&t);
    printf("Enter rate : ");
    scanf("%f",&r);
    printf("Simple Interest : %f\n",p*t*r/100);
}