#include <stdio.h>

int fact(int n);

int main() {
    int a, i;
    printf("Enter a numbers : ");
    scanf("%d",&a);
    printf("%d\n",fact(a));
    return 0;
}

int fact( int n){
    int s=0, i;
    if (n == 0){
        return 1;
    }
    else {
        return n * fact(n-1);
    }
    // printf("Result : %d\n", s);
}