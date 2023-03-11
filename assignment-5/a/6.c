#include <stdio.h>
#include <math.h>
int main() {
    float num = 0;
    for ( int i = 1; i <= 10;i++){
        num = pow(i+0.0,3.0)-1.0;
        if (i != 10){
            printf("%.1f,",num);
        }
        else {
            printf("%0.1f\n",num);
        }
    }
    return 0;
}