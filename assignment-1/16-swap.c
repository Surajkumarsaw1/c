#include <stdio.h>

void main() {
    int a,b,c;
    printf("Enter the value for a : ");
    scanf("%d",&a);
    printf("Enter the value for b : ");
    scanf("%d",&b);
    a = a + b; // a = a+b
    b = a - b; // b = a+b - b = a => b = a
    a = a - b; // a = a+b - a = b => a = b 
    printf("a = %d\nb = %d\n",a,b);
}