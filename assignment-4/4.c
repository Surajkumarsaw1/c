#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter three different numbers : ");
    scanf("%d%d%d",&a,&b,&c);
    if ( ((a > b) && (a < c)) || ((a > c) && (a < b)) ){
        printf("Second Smallest number : %d", a);
    }
    else if ( ((b > a) && (b < c)) || ((b > c) && (b < a)) ){
        printf("Second Smallest number : %d", b);
    }
    else {
        printf("Second Smallest number : %d", c);
    }
    
    return 0;
}