#include <stdio.h>
#include <math.h>
int main() {
    int num = 0;
    for ( int i = 1; i <= 10;i++){
        num = (pow(i ,2))-1;
        if (i != 10){
            printf("%d, ",num);
        }
        else {
            printf("%d\n",num);
        }
    }
    return 0;
}

/*Output
0, 3, 8, 15, 24, 35, 48, 63, 80, 99
*/