#include <stdio.h>

void main() {
    int a,b,c;
    printf("Enter the value for a : ");
    scanf("%d",&a);
    printf("Enter the value for b : ");
    scanf("%d",&b);
    c = a;
    a = b;
    b = c;
    printf("a = %d\nb = %d\n",a,b);
}