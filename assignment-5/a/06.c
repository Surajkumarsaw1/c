#include <stdio.h>
#include <math.h>
int main() {
    int num = 0;
    for ( int i = 1; i <= 10;i++){
        num = pow(i,3)-1;
        if (i != 10){
            printf("%d, ",num);
        }
        else {
            printf("%d\n",num);
        }
    }
    return 0;
}
/* OUTPUT
0, 7, 26, 63, 124, 215, 342, 511, 728, 999
*/