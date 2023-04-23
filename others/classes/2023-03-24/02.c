#include <stdio.h>

int main() {
    int init = 'A', end = init+4;
    for (int i = init; i<=end;i++){
        for (int j = init;j<=i; j++){
            printf("%c ",j);
        }
        printf("\n");
    }
    return 0;
}

/*
A
A B
A B C
A B C D
A B C D E
*/