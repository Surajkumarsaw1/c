#include <stdio.h>
#include <math.h>
int main() {
    int x;
    printf("\nS = x/2 + x/5 + x/8 + x/11 + ...... + x/20\n");
    printf("Enter the value of x : ");
    scanf("%d",&x);
    int i = 2;
    float s = 0;

    // while ( i <= 20 ){
    //     s += (float) x/i;
    //     i+=3;
    // }

    for (i = 2; i <= 20; i=i+3 ){
        s += (float) x/i;
        // printf("i = %d, s = %f\n",i,s);
    }
    printf("\nSum of the Series : %f\n", s);
    return 0;
}