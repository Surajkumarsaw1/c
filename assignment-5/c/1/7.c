#include <stdio.h>
#include <math.h>
int main() {
    int n;
    printf("\nS = 1/2 + 1/4 + 1/8 + 1/16 + ..... upto nth term \n");
    printf("Enter the value of n : ");
    scanf("%d",&n);
    float s = 0;

    for ( int i = 1; i <= n; i++){
        s += (float) 1/pow(2,i);
    }
    
    printf("\nSum of the Series : %f\n", s);
    return 0;
}