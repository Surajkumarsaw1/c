#include <stdio.h>

int main() {
    for ( int i = 1; i <= 10;i++){
        if (i != 10){
            printf("%d, ",3*i);
        }
        else {
            printf("%d",3*i);
        }
    }
    return 0;
}