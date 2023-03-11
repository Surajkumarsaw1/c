#include <stdio.h>
#include <math.h>
int main() {
    float r;
    for ( int i = 0; i < 10;i++){
        r = pow(2.0 ,i+2.0);
        printf("%.2f", r );
    }
    return 0;
}