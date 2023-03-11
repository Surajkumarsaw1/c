#include <stdio.h>

int main() {
    int sum = 1;
    for ( int i = 0; i < 10;i++){
        sum += i;
        if (i != 10){
            printf("%d, ",sum);
        }
        else {
            printf("%d",sum);
        }
    }
    return 0;
}