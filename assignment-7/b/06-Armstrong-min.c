#include <stdio.h>
#include <math.h>

// Function to check if a number is Armstrong or not
void ifarmstrong(int *num){
    int count = 0, temp, numc, sc = 0;
    numc = *num;
    temp = *num;

    // Counting the number of digits in the number
    while (numc != 0){
        count += 1;
        numc /= 10;
    }

    // Checking if the number is Armstrong or not
    for (int i = 1; i <= count; i++){
        sc = sc + pow((temp % 10), count);
        temp /= 10;
    }

    if (sc == (*num)){
        printf("Armstrong number.\n");
    }
    else {
        printf("Not Armstrong number.\n");
    }
}

int main() {
    // Taking input from user
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    
    // Checking if the entered number is Armstrong or not
    ifarmstrong(&n);
    
    return 0;
}

// Output:
// Enter a number : 9474
// Armstrong number.