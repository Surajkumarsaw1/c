#include<stdio.h>
#include<math.h>

void sop(int num);            // missing semicolon at the end of function prototype

int main()                    // main should return an integer, hence int is added
{
    char op;
    int result,code,num;
    
    printf("WELCOME\n");
    printf("Select OP:NUMBER(N)/Pattern/Array"); 
    scanf("%c",&op);          // semicolon missing at the end of the scanf statement
    
    if(op=='N')
    {
        printf("Commencing operation Enter code:");
        scanf("%d",&code);
    
        if(code==0)
        {
            printf("Code=1 for single digit operation info\n");
            printf("Code=2 for double digit calculation info\n");
            printf("Code=3 for Area and perimeter calculation of square,rectangle,circle");  // Semicolon missing at end
        }
        
        if(code==1)
        {
            printf("Enter number to know information");
            scanf("%d",&num);
            sop(num);
        }
    }

   return 0;              // return statement of the main function is missing
}

void sop(int num) 
{
    int temp,i,cmp,temp1,s=0,r,fact=1,temp2,temp3;    // s=0 was missing initially
    int arm=0,rem,tot=0,digit,count=0,sum=0;          // initialization was missing
    
    float rt;
    
    printf("NUMBER ENTERED:%d\n",num);
    
    (num%2==0)?printf("Number is even\n"):printf("Number is odd\n");
    (num>0)?printf("Number is positive\n"):printf("Number is negative\n");
    
    digit=num;
    
    if(digit<10)
    {
        printf("Number is a single digit\n");
    }
    
    else
    {
        while(digit!=0)
        {
            r=digit%10;
            digit=digit/10;
            count++;
            sum+=r;
        }
        printf("Number is a %d digit number\n",count);
        printf("Sum of digits of the number\n=%d",sum);
    }
    
    if(num<0)
    {
        printf("\nNegative value invalid, commencing correction\n");   // semicolon missing and added newline
        num=-num;
        printf("Auto corrected the number to positive\n");
    }

    printf("Resuming operation\n");
    printf("Assuming value for 5 subsequent trials\n");
    
    for(i=1;i<=5;i++)
    {
        temp=pow(num,i);
        printf("%d raised power value=%d\n",i,temp);
    }
    
    for(i=1;i<=5;i++)
    {
        rt=pow(num,1.0/i);                         // 1/i was converted to 1.0/i to make it a float division
        printf("%d raised root value=%f\n",i,rt);   // %d in format specifier was corrected to %f for printing float values
    }
    
    cmp=~num;
    printf("Complementry for %d is %d\n",num,cmp);   // added newline character
	
    temp1=num;
    
    while(temp1!=0)
    {
        r=temp1%10;
        temp1=temp1/10;
        s=s*10+r;
    }
    
    (s==num)?printf("Number is palindromic\n"):printf("Number is not palindromic\n");  // changed variable name
    
    temp2=num;
    while(temp2!=1)
    {
        fact=fact*(temp2*(temp2-1));
        temp2=temp2-2;
    }
    printf("Factorial of a number=%d\n",fact);
    
    temp3=num;
    r=0;
    
    while(temp3!=0)
    {
        r=temp3%10;
        temp3=temp3/10;
        arm+=pow(r,3);
    }
    
    (arm==num)?printf("Armstrong number valid\n"):printf("Armstrong number not valid\n");  // changed variable name
    
    for(i=1;i<num;i++)
    {
        rem=num%i;
        if(rem==0)
        {
            tot=tot+i;
        }
    }

    if (tot==num)
    {
        printf("Number is perfect\n");
    }

    else
    {
        printf("Number is not perfect\n");
    }	
}