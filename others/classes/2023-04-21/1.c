#include <stdio.h>

int main() {
    int n = 3;
    for (int i = 0; i < n;i++){
        for (int j = 0; j < n; j++){
            printf("[%d][%d]\t",i,j);
        }
        printf("\n");
    }
    return 0;
}