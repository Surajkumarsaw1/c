#include <stdio.h>
#include <math.h>
int main() {
    int r;
    for ( int i = 1; i <= 10;i++){
        r = pow(2,i+1);
        // printf("%d", r );
        if (i != 10){
            printf("%d, ",r);
        }
        else {
            printf("%d\n",r);
        }
    }
    return 0;
}