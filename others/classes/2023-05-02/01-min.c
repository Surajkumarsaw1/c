#include <stdio.h>

int main() {
    int a = 4;
    int *p = &a;

    printf("Value of a = %d\n", a);
    printf("Value of a = %d\n", *(&a));
    printf("Value of a = %d\n", *p);
    printf("Address of a = %p\n", &a);
    printf("Address of a = %p\n", p);

    // Expected Output:
    /*
    Value of a = 4
    Value of a = 4
    Value of a = 4
    Address of a = 0x7fff5fbff904 (this may vary)
    Address of a = 0x7fff5fbff904 (this may vary)
    */

    return 0;
}