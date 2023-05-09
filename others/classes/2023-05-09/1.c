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

void changeAuto(){
    auto int x = 10;
    printf("x=%d\n",x);
    x += 10;
}

void changeStatic(){
    static int y = 10;
    printf("y = %d\n",y);
    y+=10;
}