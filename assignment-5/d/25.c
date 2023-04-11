/*
Using switch statement, write a menu driven program for the following:
(a) To find and display the sum of the series given below:
S = x^1 - x^2 + x^3 - x^4 + x^5 - ............ - x20; where x = 2
(b) To display the series:
1, 11, 111, 1111, 11111
For an incorrect option, an appropriate error message should be displayed.
*/

#include <stdio.h>
#include <math.h>

int main() {
    int op, sum = 0, term;;

    printf("Option for checking : \n\t");
    printf("1. S = x^1 - x^2 + x^3 - x^4 + x^5 - ............ - x^20; where x = 2\n\t");
    printf("2. 1, 11, 111, 1111, 11111\n\n\t");
    printf("Enter option : ");
    scanf("%d",&op);

    switch (op)
    {
    case 1:
        for (int i = 1; i<= 20; i++){
            
            if ( i%2 != 0){
                sum += pow(2, i);
            }
            else{
                sum -= pow(2, i);
            }
        }
        printf("Sum of series = %d\n",sum);
        break;
    
    case 2:
        for ( int i = 1; i<=5 ;i++){
            term = 1;
            for ( int j = 1; j < i; j++){
                term = (term*10) +1;
            }
            if (i != 5){
                printf("%d + ", term);
            }
            else{
                printf("%d\n",term);
            }
            
        }
        break;

    default:
        printf("Not a valid option.\n");
        break;
    }
    return 0;
}
