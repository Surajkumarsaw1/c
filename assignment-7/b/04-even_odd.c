#include <stdio.h>

void evenodd(int *);

int main() {
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    evenodd(&num);
    return 0;
}

void evenodd(int *n){
    printf("%s\n", (*n)%2 == 0 ? "even" : "odd");
}