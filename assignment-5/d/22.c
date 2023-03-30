/*
Using switch statement, write a menu driven program to:
(a) find and display all the factors of a number input by the user ( including 1 and the excluding the number itself).
Example: Sample Input : n = 15
               Sample Output : 1, 3, 5
(b) find and display the factorial of a number input by the user (the factorial of a non-negative integer n, denoted by n!, is the product of all integers less than or equal to n.)
Example: Sample Input : n = 5
               Sample Output : 5! = 1*2*3*4*5 = 120
For an incorrect choice, an appropriate error message should be displayed.
*/

#include <stdio.h>

int main() {
    int num, op;

    printf("Enter a number : ");
    scanf("%d",&num);
    
    printf("Options : \n\t");
    printf("1. Display all the factors of a number input.\n\t");
    printf("2. Display the factorial of a number input.\n");
    printf("Enter your choice : ");
    scanf("%d",&op);


    switch ( op ){
        case 1:
            for (int i = 1; i < num; i++){
                if (num%i == 0){
                    if (i == 1){
                        printf("%d",i);
                    }
                    else {
                        printf(", %d",i);
                    }
                }
            }
            printf("\n");
            break;
        case 2:
            int product = 1;
            printf("%d! = ",num);
            for (int i = 1; i <= num; i++){
                product *= i;
                if (i == 1){
                    printf("%d",i);
                }
                else{
                    printf("*%d",i);
                }
            }
            printf(" = %d\n",product);
            break;

        default:
            printf("Not a valid option.");
    }

    return 0;
}

/*
Output : 

Enter a number : 64
Options : 
        1. Display all the factors of a number input.
        2. Display the factorial of a number input.
Enter your choice : 1
1, 2, 4, 8, 16, 32

Enter a number : 4
Options : 
        1. Display all the factors of a number input.
        2. Display the factorial of a number input.
Enter your choice : 2
4! = 1*2*3*4 = 24
*/