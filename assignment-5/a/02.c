/*
1, 2, 4, 7, 11, ………….
*/

#include <stdio.h>

int main() {
    int sum = 1;
    for ( int i = 0; i < 10;i++){
        sum += i;
        if (i != 9){
            printf("%d, ",sum);
        }
        else {
            printf("%d\n",sum);
        }
    }
    return 0;
}
/*
1, 2, 4, 7, 11, 16, 22, 29, 37, 46
*/