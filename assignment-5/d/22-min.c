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

    printf("Options : \n\t1. Display all the factors of %d.\n\t2. Display the factorial of %d.\nEnter your choice : ", num, num);
    scanf("%d",&op);

    switch ( op ){
        case 1:
            for (int i = 1; i <= num; i++){
                if (num%i == 0){
                    printf("%d%s", i, i==num ? "\n" : ", ");
                }
            }
            break;
        case 2:
            {
                int product = 1;
                printf("%d! = ",num);
                for (int i = 1; i <= num; i++){
                    product *= i;
                    printf("%d%s",i, i<num ? "*" : " = ");
                }
                printf("%d\n",product);
            }
            break;
        default:
            printf("Not a valid option.\n");
    }

    return 0;
}

/*
Output :

Enter a number : 64
Options : 
        1. Display all the factors of 64.
        2. Display the factorial of 64.
Enter your choice : 1
1, 2, 4, 8, 16, 32, 64

Enter a number : 4
Options : 
        1. Display all the factors of 4.
        2. Display the factorial of 4.
Enter your choice : 2
4! = 1*2*3*4 = 24
*/