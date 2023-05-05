#include <stdio.h>
#include <math.h>
int main() {
    int num = 0;
    for ( int i = 1; i <= 10;i++){
        num = pow( (i*2) ,2);
        if (i != 10){
            printf("%d, ",num);
        }
        else {
            printf("%d\n",num);
        }
    }
    return 0;
}

/*
4, 16, 36, 64, 100, 144, 196, 256, 324, 400
*/