#include <stdio.h>

int main() {
    int m, n, op, result=0, r;
    printf("Enter the two numbers m and n (m > n) : ");
    scanf("%d%d",&m, &n);

    printf("1. Add\n");
    printf("2. Multiply\n");
    printf("3. Division\n");

    printf("Select option : ");
    scanf("%d",&op);

    switch (op){
case 1:
	result = m;
	for (int i = 0; i < n; i++){
		result++;
	}
	printf("Sum : %d\n",result);
	break;
case 2:
	result = 0;
	for (int i = 0; i < n; i++){
		result += m;
	}
	printf("\n\t %d x %d = %d\n",m,n,result);
	break;
case 3:
	while ( m >= n){
		m -= n;
		r = m;
		result++;
	}
	printf("Quotient : %d, Remainder : %d\n",result,r);
	break;
default:
	printf("Enter a valid option.");
    }

    return 0;
}
