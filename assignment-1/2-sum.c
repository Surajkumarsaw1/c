#include<stdio.h>

void main() {
	int a,b;
	printf("Enter integer value for a : ");
	scanf("%d",&a);
	printf("Enter integer value for b : ");
	scanf("%d",&b);
	printf("Sum = %d\n",a+b);
}

// int main()
// {
// 	int num1,num2;
// 	char op;
// 	printf("Enter The Two Numbers: ");
// 	scanf("%d",&num1);
// 	scanf("%d",&num2);
// 	printf("Enter the operator: ");
// 	scanf(" %c",&op);
// 	switch(op)
// 	{
// 		case '+':
// 			printf("%d + %d = %d",num1,num2,num1+num2);
// 			break;
// 		case '-':
// 			printf("%d - %d = %d",num1,num2,num1-num2);
// 			break;
// 		case '*':
// 			printf("%d * %d = %d",num1,num2,num1*num2);
// 			break;
// 		case '/':
// 			printf("%d / %d = %d",num1,num2,num1/num2);
// 			break;			
// 	}	
// 	return 0;
// }