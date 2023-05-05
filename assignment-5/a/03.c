/*
3, 6, 9, 12, ……………..
*/

#include <stdio.h>

int main() {
    for ( int i = 1; i <= 10;i++){
        if (i != 10){
            printf("%d, ",3*i);
        }
        else {
            printf("%d\n",3*i);
        }
    }
    return 0;
}

/* Output
3, 6, 9, 12, 15, 18, 21, 24, 27, 30
*/