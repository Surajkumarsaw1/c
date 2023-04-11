#include <stdio.h>

int main() {
	int p,q;
	printf("Enter two numbers p and q (p<q) : ");
	scanf("%d%d",&p,&q);

	for (int i = p; i<=q; i++){
		if( i%7 == 0 || i%10 == 7){
			printf("Buzz number : %d\n",i);
		}
	}
}
