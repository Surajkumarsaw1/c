#include <stdio.h>

int sum(int, int);

int main() {
    int z;
    int (*fp)(int, int);
    fp = sum;
    z = fp(7,6);
    printf("Result: %d\n",z);
    return 0;
}

int sum(int a, int b){
    int c;
    c = a + b;
    return c;
}