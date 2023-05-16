#include <stdio.h>

int main() {
    //initializing variables
    int num, factorial = 1;

    //getting user input
    printf("Enter a positive number: ");
    scanf("%d", &num);

    //calculating factorial of the number
    for (int i = 1; i <= num; i++) {
        factorial *= i;
    }

    //displaying output
    printf("%d! = %d", num, factorial);
    return 0;
}

//Sample Output
//Enter a positive number: 7
//7! = 5040