#include <stdio.h>

int main() {
    int n1,n2, min, gcd;
    printf("Enter two numbers : ");
    scanf("%d%d",&n1,&n2);

    if (n1 > n2){
        min = n2;
    }
    else{
        min = n1;
    }

    for ( int i = 1;  i<= min; i++){
        if (n1%i==0 && n2%i==0){
            gcd = i;
        }
    }
    printf("GCD : %d\n",gcd);
    return 0;
}