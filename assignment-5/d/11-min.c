#include <stdio.h>
#include <math.h>

int main() {
    //initializing variables
    int num, count = 0, temp, numc, sc = 0;

    //getting user input
    printf("Enter a number: ");
    scanf("%d", &num);
    numc = num;
    temp = num;

    //counting the number of digits
    while (numc % 10 != 0) {
        count += 1;
        numc /= 10;
    }

    //calculating sum of cubes of digits
    for (int i = 1; i <= count; i++) {
        sc = sc + pow((temp % 10), count);
        temp /= 10;
    }

    //checking if number is armstrong or not
    if (sc == num) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}

//Sample Output
//Enter a number: 153
//153 is an Armstrong number.