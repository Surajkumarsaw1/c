#include <stdio.h>

int main() {
    int a,b;
    printf("Enter two number : ");
    scanf("%d%d",&a,&b);

    if (a == b) {
        printf("Both the numbers are equal");
    }
    else if ( a > b){
        printf("Square of second no. : %d\n",b*b);
        printf("Cube of greater no. : %d\n",a*a*a);
    }
    else{
        printf("Square of second no. : %d\n",a*a);
        printf("Cube of greater no. : %d\n",b*b*b);
    }
    return 0;
}