#include <stdio.h>

int main() {
    int i ;
    printf("\nS = (1*2) + (2*3) + ...... + (19*20) \n");
    float s = 0;
    for ( i = 1; i <= 19; i++ ){
        s += i*(i+1);
        
        // printf("%d, %f, %f\n",i , s);
    }
    printf("\nSum of the Series : %f \n", s);
    return 0;
}