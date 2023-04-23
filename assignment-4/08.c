#include <stdio.h>

int main() {
    int cno, unit;
    printf("Enter Consumer Number : ");
    scanf("%d",&cno);
    printf("Enter units :  ");
    scanf("%d",&unit);

    printf("\nConsumer No : %d\n",cno);
    if (unit > 500){
        printf("Bill : %f", unit*3.50);
    }
    else if (unit > 300){
        printf("Bill : %f", unit*2.80);
    }
    else if (unit > 100){
        printf("Bill : %f", unit*2.30);
    }
    else {
        printf("Bill : %f", unit*1.80);
    }

    return 0;
}