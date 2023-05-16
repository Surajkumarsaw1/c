#include <stdio.h>
int main(){
    for(int i=1;i<=5;i++){
        for(int j=0;j<=5-i;j++) printf("* ");
        printf("\n");
    }
    return 0;
}
// Output:
/*
 * * * * *
 * * * *
 * * *
 * *
 *
*/