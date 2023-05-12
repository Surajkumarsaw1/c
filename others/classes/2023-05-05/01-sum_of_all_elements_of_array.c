#include <stdio.h>

void sum(int a[]);

int main() {
    int a[10], i;
    printf("Enter 10 numbers : ");
    for (i = 0; i < 10; i++){
        scanf("%d",&a[i]);
    }
    sum(a);
    return 0;
}

void sum( int a[10]){
    int s=0, i;
    for ( int i = 0; i < 10; i++){
        s+=a[i];
    }
    printf("Result : %d\n", s);
}