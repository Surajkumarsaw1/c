#include <stdio.h>
#include <math.h>

int main() {
    int a;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    
    // calculate sum of series
    float s = 0;
    for (int i = 2; i <= 20; i++) {
        s += a*i;
    }

    printf("Sum of the series: %f\n", s);
    return 0;
}

/*
Sample Input:
Enter the value of a: 3

Sample Output:
Sum of the series: 1170.000000
*/