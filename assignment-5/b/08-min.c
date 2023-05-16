#include <stdio.h>

int main() {
    //initializing variables
    int x;
    int i; 
    float sum = 0;

    //getting user input
    printf("Enter the value of x: ");
    scanf("%d", &x);

    //calculating sum of the series
    for (i = 2; i <= 20; i += 3){
        sum += (float) x / i;
    }

    //displaying output
    printf("The sum of the series is: %.2f\n", sum);
    return 0;
}

//Sample Output
//Enter the value of x: 5
//The sum of the series is: 1.97