#include <stdio.h>
#include <math.h>

int main() {
    int num;
    printf("Enter a positive number less than 1000 : ");
    scanf("%d",&num);

    if ( (num / 1000) == 0){
        if ( (num / 100) > 0 ){
        printf("Cube root of %d is %f",num,cbrt(num));
        }
        else if ( (num/10) > 0){
            printf("Square root of %d is %f",num,sqrt(num));
        }
        else {
            printf("Square of %d is %d",num,num*num);
        }
    }
    return 0;
}