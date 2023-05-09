// Write a C program to store 20 temperatures in °F in a 1- Dimensional Array 
// and display all the temperatures after converting them into °C.
// Hint: (c/5) = (f - 32) / 9.
#include <stdio.h>

int main() {
    float c[20], f[20];
    int i, n= 20;

    printf("Enter 20 numbers : ");

    // takes 20 input in carray
    for ( i = 0; i < n;i++){
        scanf("%f", &c[i]);
    }

    // converting and storing in f array
    for ( i = 0; i < n; i++){
        f[i] = (float) (( 1.8 * c[i] ) + 32.0);
    }

    // printing result
    for (i = 0; i < n; i++){
        printf("%.2f°C = %.2f°F\n",c[i],f[i]);
    }
    return 0;
}
/* Output :
Enter 20 numbers : 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19
0.00°C = 32.00°F
1.00°C = 33.80°F
2.00°C = 35.60°F
3.00°C = 37.40°F
4.00°C = 39.20°F
5.00°C = 41.00°F
6.00°C = 42.80°F
7.00°C = 44.60°F
8.00°C = 46.40°F
9.00°C = 48.20°F
10.00°C = 50.00°F
11.00°C = 51.80°F
12.00°C = 53.60°F
13.00°C = 55.40°F
14.00°C = 57.20°F
15.00°C = 59.00°F
16.00°C = 60.80°F
17.00°C = 62.60°F
18.00°C = 64.40°F
19.00°C = 66.20°F
*/