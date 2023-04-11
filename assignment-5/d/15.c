#include <stdio.h>

int main() {
	float p,r,t,si;
	printf("Enter principal, rate and time : ");
	scanf("%f%f%f",&p,&r,&t);
	for ( int i = 1; i <= t; i++){
		si = p*r*i/100;	
		printf("Intrest on %.2f is %.2f\n",p,si);
		p += si;
	}
	return 0;
}