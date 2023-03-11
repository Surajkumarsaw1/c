#include <stdio.h>
#include <math.h>
int main() {
    int a;
    printf("\nS = (a*2) + (a*3) + ...... + (a*20)\n");
    printf("Enter the value of a : ");
    scanf("%d",&a);
    float s = 0;
    for ( int i = 2; i <= 20;i++){
        s += a*i;
        // if (i != 20){
        //     printf("%.2f, ",s);
        // }
        // else {
        //     printf("%0.2f",s);
        // }
    }
    printf("\nSum of the Series : %f\n", s);
    return 0;
}