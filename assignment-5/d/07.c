#include <stdio.h>

int main() {
	int num, count=0;
	printf("Enter a number : ");
	scanf("%d",&num);

	while (num%10 != 0){
		count += 1;
		num /= 10;
	}
	
	printf("Number of digits = %d\n",count);

	if (count%2 == 0){
		printf("The number contains even number of digits.\n");
	}
	else {
		printf("The number contains odd number of digits.\n");
	}
}
