#include <stdio.h>

int main() {
    int a = 10;
    float b = 35.75;
    void *ptr;
    ptr = &a;
    printf("The value of a = %d\n", *((int *)ptr));
    ptr = &b;
    printf("The value of b = %f\n", *((float *)ptr));
    return 0;
}