#include <stdio.h>

int main() {
	int num,p=0,n=0,psum=0,nsum=0;

	for (int i = 1; i <= 15; i++){
		printf("Enter number %d : ",i);
		scanf("%d",&num);
		
		if ( num > 0){
			p++;
			psum += num;
		}
		else if (num < 0){
			n++;
			nsum += num;
		}
		printf("+ve no: %d, +ve sum : %d, -ve no. : %d, -ve sum: %d\n",p,psum,n,nsum);
	}
	printf("Number of positive numbers : %d\n",p);
	printf("Number of negative numbers : %d\n",n);
	printf("Sum of positive numbers : %d\n",psum);
	printf("Sum of negative numbres : %d\n",nsum);
}

