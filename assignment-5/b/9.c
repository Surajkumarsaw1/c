#include <stdio.h>
#include <math.h>
int main() {
    int a,n;
    
    printf("\nS = 1-a + a^2-a^3+ ..... +a^10 \n");
    n = 10;

    printf("Enter the value of a : ");
    scanf("%d",&a);
    double s = 0;
    for ( int i = 0; i <= n; i++){
        if (i%2 == 0){
            s += pow(a,i);
        }
        else {
            s -= pow(a,i);
        }

        // if (i != n){
        //     printf("%f, ",s);
        // }
        // else {
        //     printf("%f",s);
        // }
    }
    
    printf("\nSum of the Series : %f\n", s);
    return 0;
}