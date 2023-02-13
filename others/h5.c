#include <stdio.h>

int main(){

    int a,b,temp;
    printf("\nEnter first integer=");
    scanf("%d",&a);
    printf("\nEnter second integer");
    scanf("%d",&b);
    temp = a;
    a = b;
    b = temp;
    printf("\nThe swapped value of a = ", a);
    printf("\nThe swapped value of b = ", b);
    return 0;
}