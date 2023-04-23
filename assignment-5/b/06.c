#include <stdio.h>
#include <math.h>
int main() {
    int a,n;
    printf("\nS = 1^2/a + 3^2/ a^2+ 5^2/ a^3+ ...... to n terms\n");
    printf("Enter the value of a and n : ");
    scanf("%d%d",&a,&n);
    double s = 0;
    for ( int i = 1; i <= n; i++){

        s += pow( ( 1 + (2*(i-1)) ) ,2)/(pow(a,i));
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