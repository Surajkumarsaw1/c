/* 
The code computes the factorial of an integer using a recursive function called fact. It takes an integer as input from the user, calls the fact function to compute the factorial and prints the result using printf.
*/
#include <stdio.h>

int fact(int n);

int main() {
    int a;
    printf("Enter a number : ");
    scanf("%d",&a);
    printf("Factorial of %d = %d\n", a, fact(a));
    return 0;
}

int fact( int n){
    if (n == 0){
        return 1;
    }
    else {
        return n * fact(n-1);
    }
}
// Output: Enter a number : 5
//         Factorial of 5 = 120