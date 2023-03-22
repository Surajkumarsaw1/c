#include <stdio.h>

int main() {
    int num,p=1;
    printf("Enter a positive number : ");
    scanf("%d",&num);
    printf("%d! = ");
    for (int i = 1;i <= num; i++){
        p = p * i;
    }
    printf("%d\n",p);
    return 0;
}