#include <stdio.h>
#include <math.h>
int main() {
    int a,n;
    printf("\nS = a - a/2 + a/3 - a/4 + ... - a/20 \n");
    n = 20;
    printf("Enter the value of a : ");
    scanf("%d",&a);
    float s = 0;
    for ( int i = 1; i <= n; i++){
        if (i%2 == 0){
            s -= (float) a/i;
        }
        else { 
            s += (float) a/i;
        }

        // if (i != n){
        //     printf("%f, ",s);
        // }
        // else {
        //     printf("%f\n",s);
        // }
    }
    
    printf("\nSum of the Series : %f\n", s);
    return 0;
}