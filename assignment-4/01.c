/*
if else ladder.
Largest amoung three number using if else ladder.
*/

#include <stdio.h>

int main() {
    int a,b,c;
    printf("Enter three number : ");
    scanf("%d%d%d",&a,&b,&c);
    if (a > b && a > c){
        printf("largest no = %d\n",a);
    }
    else if (b > a && b > c){
        printf("largest no = %d\n",b);
    }
    else {
        printf("largest no = %d\n",c);
    }
    return 0;
}