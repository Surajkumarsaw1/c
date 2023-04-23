#include <stdio.h>
#include <math.h>
int main() {
    int n, s, t;
    printf("\nS = 1 + (1*2) + (1*2*3) + .... + (1*2*3*4*...*n) \n");
    printf("Enter the value of n : ");
    scanf("%d",&n);
    s = 0;
    for ( int i = 1; i <= n; i++){
        t = 1;
        for (int j = 1; j <= i; j++){
            t *= j;
        }
        s += t;
    }
    
    printf("\nSum of the Series : %d\n", s);
    return 0;
}