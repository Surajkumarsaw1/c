#include <stdio.h>

int main() {
    int i,sq;
    printf("\nS = 1 + 4 + 9 + ...... + 400 \n");
    float s = 0;
    for ( i = 1; (i*i) <= 400; i++ ){
        s += (i*i);
        // printf("%d, %d, %f\n",i,(i*i), s);
    }
    printf("\nSum of the Series : %f \n", s);
    return 0;
}