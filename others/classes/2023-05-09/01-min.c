#include <stdio.h>

void changeAuto();
void changeStatic();

int main() {
    changeAuto();
    changeAuto();
    changeStatic();
    changeStatic();
    return 0;
}

void changeAuto() {
    int x = 10;
    printf("x = %d\n", x);
    x += 10;
}

void changeStatic() {
    static int y = 10;
    printf("y = %d\n", y);
    y += 10;
}

// Expected output:
/*
x = 10
x = 10
y = 10
y = 20
*/