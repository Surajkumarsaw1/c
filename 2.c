#include<stdio.h>
int main()
{
	int num1,num2;
	char op;
	printf("Enter The Two Numbers: ");
	scanf("%d",&num1);
    scanf("%d",&num2);
	printf("Enter the operator: ");
	scanf(" %c",&op);
	switch(op)
	{
		case '+':
			printf("%d + %d = %d",num1,num2,num1+num2);
			break;
		case '-':
			printf("%d - %d = %d",num1,num2,num1-num2);
			break;
		case '*':
			printf("%d * %d = %d",num1,num2,num1*num2);
			break;
		case '/':
			printf("%d / %d = %d",num1,num2,num1/num2);
			break;			
	}	
	return 0;
}