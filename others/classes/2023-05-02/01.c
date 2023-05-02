#include <stdio.h>

void main() {
    int a = 4;
    int *p;
    p = &a;
    printf("Value of a = %d\n",a);
    printf("Value of a = %d\n",*(&a));
    printf("Value of a = %d\n", *p);
    printf("Address of a = %u\n", &a);
    printf("Address of a = %u\n",p);
}