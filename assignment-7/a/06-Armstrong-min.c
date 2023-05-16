/*
Check whether a given number is Armstrong or not using function.
*/

#include <stdio.h>
#include <math.h>

void ifarmstrong(int);

int main() {
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    ifarmstrong(num);
    return 0;
}

void ifarmstrong(int num){
    int count=0, temp, numCopy, sum=0;
    numCopy = num;
    temp = num;
	
    while (numCopy != 0){
        numCopy /= 10;
        count++;
    }
    
    while (temp != 0){
        sum += pow((temp%10),count);
        temp /= 10;
    }

    if (sum == num){
        printf("%d is Armstrong number.\n", num);
    }
    else {
        printf("%d is Not armstrong number.\n", num);
    }
}

// Output : 
// Enter a number : 153
// 153 is Armstrong number.