#include <stdio.h>
#include <math.h>
int main() {
    int a,n;
    printf("\nS = 1 + 2^2/ a + 3^3/ a^2+ ...... to n terms\n");
    printf("Enter the value of a and n : ");
    scanf("%d%d",&a,&n);
    float s = 0;
    for ( int i = 1; i <= n;i++){
        s += pow(i,i)/(pow(a,i-1));
        // if (i != n){
        //     printf("%.2f, ",s);
        // }
        // else {
        //     printf("%0.2f",s);
        // }
    }
    printf("\nSum of the Series : %f\n", s);
    return 0;
}