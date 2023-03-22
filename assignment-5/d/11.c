#include <stdio.h>
#include <math.h>

int main() {
    int num, count=0, temp, numc, sc=0;
	printf("Enter a number : ");
	scanf("%d",&num);
    numc = num;
    temp = num;
	while (numc%10 != 0){
		count += 1;
		numc /= 10;
	}
	
	//printf("Number of digits = %d\n",count);
    
	//while ( (temp%10 != 0 ) || (temp/10 != 0)){
	for( int i = 1; i <= count; i++ ){
        //printf("%d\n%d",(temp%10), sc);
        sc = sc + pow((temp%10),count);
        //printf(" + %f = %d\n",pow((temp%10),count),sc);
		temp /= 10;
	}

    if (sc == num){
        printf("Armstrong number.\n");
    }
    else {
        printf("Not armstrong number.\n");
    }
}