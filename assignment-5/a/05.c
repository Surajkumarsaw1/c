#include <stdio.h>
#include <math.h>
int main() {
    float r = 0;
    for ( int i = 0; i < 10;i++){
        r += 1.5;
        if (i != 9){
            printf("%.1f, ",r);
        }
        else {
            printf("%0.1f",r);
        }
    }
    return 0;
}