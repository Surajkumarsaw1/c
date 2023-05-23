#include <stdio.h>
#include <math.h>

int isArmstrong(int num);

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    float (*fp)(int);
    fp = isArmstrong;
    if (fp(num)) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}

int isArmstrong(int num) {
    int count = 0, temp = num, sum = 0;
    
    while (temp != 0) {
        count++;
        temp /= 10;
    }
    
    temp = num;
    
    while (temp != 0) {
        sum += pow(temp % 10, count);
        temp /= 10;
    }

    return (sum == num);
}