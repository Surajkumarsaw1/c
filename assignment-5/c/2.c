#include <stdio.h>


int main() {
    int t1=0, t2=1, tn, n=10;
    printf("Fibonacci series upto 10th term : \n");
    printf("%d, %d, ",t1,t2);
    for (int i = 3; i <= n; i++){

        tn = t1 + t2;

        if (i != n){
            printf("%d, ",tn);
        }
        else{
            printf("%d",tn);
        }
            
        t1 = t2;
        t2 = tn;
    }
    return 0;
}