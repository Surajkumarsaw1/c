#include <stdio.h>

void main() {
    int num;
    printf("Enter value of num : ");
    scanf("%d",&num);
    num<0 ? printf("Negative\n"):(num > 0 ? printf("Positive") : printf("Zero") ) ;
}