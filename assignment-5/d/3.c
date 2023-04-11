#include <stdio.h>

int main() {
    int i,num,count=0;
    for (i = 1; i<=15; i++){
        printf("Enter number %d : ",i);
        scanf("%d",&num);
        if ( num % 5 == 0){
            if ( num%10 == 0){
                count++;
            }
            else{
                printf("\t%d\n",num);
            }
        }
    }
    printf("Count of numbers ending with 0 : %d\n",count);
    return 0;
}