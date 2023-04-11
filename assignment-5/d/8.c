#include <stdio.h>

int main() {
	int num, rev=0, diff=0, temp=0;
	
	printf("Enter a number : ");
	scanf("%d",&num);
	temp = num;
	
	//while ( (temp%10 != 0 ) || (temp/10 != 0)){
	while( temp != 0 ){
		rev = rev*10 + temp%10;
		temp /= 10; // temp = temp / 10 
		printf("rev : %d, temp : %d\n",rev, temp);
	}
	printf("Reversed number : %d\n",rev);
	
	diff = rev-num;
	//printf("Absolute Differece = %d\n",diff);
	if ( diff < 0){
		diff = 0-diff;
	}
	printf("Absolute Differece = %d\n",diff);
	
	return 0;
}