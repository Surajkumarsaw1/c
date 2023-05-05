#include <stdio.h>
#include <math.h>
int main() {
    int num = 0;
    for ( int i = 1; i <= 20;i+=2){
        num = pow( i ,2);
        if (i != 19){
            printf("%d, ",num);
        }
        else {
            printf("%d\n",num);
        }
    }
    return 0;
}

/*
1, 9, 25, 49, 81, 121, 169, 225, 289, 361
*/