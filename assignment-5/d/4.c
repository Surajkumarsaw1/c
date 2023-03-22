#include <stdio.h>
#include <math.h>

int main() {
	int m,n,s;
	float sq;
	printf("Enter two numbers m and n (where m<n , m>0, n>0) : ");
	scanf("%d%d",&m,&n);
	
	for (int i = m; i <=n; i++){
		sq = sqrt(i);
		s = (int) sq/1;

		if ( s == sq){
			printf("%d is a perfect square\n",i);
		}
	}
	return 0;
}
