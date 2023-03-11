#include <stdio.h>
#include <math.h>
int main() {
    int a;
    printf("\nS = a + a^2/2 + a^3/3 + ...... + a^10/10\n");
    printf("Enter the value of a : ");
    scanf("%d",&a);
    float s = 0;
    for ( int i = 1; i <= 10;i++){
        s += pow(a,i)/i;
        // if (i != 10){
        //     printf("%.2f, ",s);
        // }
        // else {
        //     printf("%0.2f",s);
        // }
    }
    printf("\nSum of the Series : %f\n", s);
    return 0;
}