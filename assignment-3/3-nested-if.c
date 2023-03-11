#include <stdio.h>

void main() {
    int a ,b, c ;
    printf("Enter three numbers : ");
    scanf("%d%d%d",&a,&b,&c);
    if (a > b){
        if ( a > c) {
            printf("The largest no : %d\n",a);
        }
        else{
            printf("The largest no : %d\n",c);
        }
    }
    else {
        if ( b > c) {
            printf("The largest no : %d\n",b);
        }
        else{
            printf("The largest no : %d\n",c);
        }
    }
}