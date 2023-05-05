/*
1.5, 3.0, 4.5, 6.0, …………..
*/

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
            printf("%0.1f\n",r);
        }
    }
    return 0;
}

/* Output
1.5, 3.0, 4.5, 6.0, 7.5, 9.0, 10.5, 12.0, 13.5, 15.0
*/