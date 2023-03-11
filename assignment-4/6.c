#include <stdio.h>

int main() {
    int a;
    printf("Enter a number : ");
    scanf("%d",&a);

    if ((a > 0) && (a % 2 == 0)){
        printf("%d,%d,%d\n",a+2,a+4,a+6);
    }
    else if ((a < 0) && (a % 2 != 0)){
        printf("%d,%d,%d\n",a-2,a-4,a-6);
    }
    else {
        printf("Number is neither a positive even nor a negative odd");
    }
    return 0;
}