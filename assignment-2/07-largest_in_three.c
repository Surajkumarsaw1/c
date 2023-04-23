#include <stdio.h>

void main() {
    int num1,num2,num3;
    printf("Enter value of num1, num2 and num3 : ");
    scanf("%d%d%d",&num1,&num2,&num3);
    printf("%d",(num1 > num2 ? (num1> num3 ? num1 : num3 ):(num2> num3 ? num2 : num3 ) )) ;
}