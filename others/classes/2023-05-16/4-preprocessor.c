#include <stdio.h> // file inclusion
#define PI 3.14 // macro preprocessor
#define CIRCLEAREA(r) PI*r*r // nest in macro preprocessor
#define CAPITAL "DELHI"
#define START int main()

START {
    printf("%f",PI);
    return 0;
}