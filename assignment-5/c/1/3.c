#include <stdio.h>

int main() {
    int i ;
    printf("\nS = 1 + (1/3) + (1/5) + ...... + (1/19) \n");
    float s = 0;
    for ( i = 1; i <= 19; i+=2 ){
        s += (float) 1/i;
        // printf("%d, %f, %f\n",i , s);
    }
    printf("\nSum of the Series : %f \n", s);
    return 0;
}