/*
Write a C program to check whether a number is Armstrong or not using function. 
*/
#include <stdio.h>
#include <math.h>

void ifarmstrong(int);

int main() {
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    ifarmstrong(n);
    return 0;
}

void ifarmstrong(int num){
    int count=0, temp, numc, sc=0;
    numc = num;
    temp = num;
	while (numc%10 != 0){
		count += 1;
		numc /= 10;
	}
	
	//printf("Number of digits = %d\n",count);
    
	//while ( (temp%10 != 0 ) || (temp/10 != 0)){
	for( int i = 1; i <= count; i++ ){
        sc = sc + pow((temp%10),count);
		temp /= 10;
	}

    if (sc == num){
        printf("Armstrong number.\n");
    }
    else {
        printf("Not armstrong number.\n");
    }
}
