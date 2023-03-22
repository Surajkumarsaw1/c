#include <stdio.h>

int main() {
	int num, rev=0, diff=0, temp=0;
	
	printf("Enter a number : ");
	scanf("%d",&num);
	temp = num;
	
	//while ( (temp%10 != 0 ) || (temp/10 != 0)){
	while( temp != 0 ){
		rev = rev*10 + temp%10;
		temp /= 10;
	}
	//printf("Reversed number : %d\n",rev);
	
	if ( num == rev){
		printf("Palindrome Number.\n");
	}
	else {
        printf("Not palindrome Number.\n");
    }
    return 0;
}