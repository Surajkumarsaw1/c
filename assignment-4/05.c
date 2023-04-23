#include <stdio.h>

int main() {
    int a, b, c;
    char op;
    printf("Enter three different numbers : ");
    scanf("%d%d%d",&a,&b,&c);
    printf("Enter s for sum and p for product : ");
    scanf(" %c",&op);

    switch(op) {
        case 's':
            printf("Sum : %d",a+b+c);
            break;
        case 'p':
            printf("Product : %d",a*b*c);
            break;
        default:
            printf("Invalid Character");
    }
    return 0;
}