#include <stdio.h>

int main() {
    int i,n1,n2,se=0,so=0;
    printf("Enter lower number : ");
    scanf("%d",&n1);
    printf("Enter greater number : ");
    scanf("%d",&n2);
    for (i = n1; i<=n2; i++){
        if ( i % 2){
            se += i;
        }
        else{
            so+=i;
        }
    }
    printf("Sum of even numbers : %d\n",se);
    printf("Sum of odd numbers : %d\n",so);
    return 0;
}