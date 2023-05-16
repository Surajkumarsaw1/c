#include <stdio.h>
#include <math.h>

int main() {
    int option, sum = 0, term;;

    // display menu
    printf("Menu:\n");
    printf("1. Find and display the sum of the series:\n\tS = x^1 - x^2 + x^3 - x^4 + x^5 - ............ - x^20; where x = 2\n");
    printf("2. Display the series:\n\t1, 11, 111, 1111, 11111\n");

    // get input from user
    printf("Enter option: ");
    scanf("%d", &option);

    // perform operation according to user's input
    switch (option)
    {
    case 1:
        for (int i = 1; i <= 20; i++) {
            if (i % 2 != 0) {
                sum += pow(2, i);
            }
            else {
                sum -= pow(2, i);
            }
        }
        printf("Sum of series = %d\n", sum);
        break;
    
    case 2:
        for (int i = 1; i <= 5 ; i++) {
            term = 1;
            for (int j = 1; j <= i; j++) {
                term = (term * 10) + 1;
            }
            if (i != 5) {
                printf("%d + ", term);
            }
            else {
                printf("%d\n", term);
            }      
        }
        break;

    default:
        printf("Invalid option.\n");
        break;
    }

    return 0;
}

/*
Output:
Menu:
1. Find and display the sum of the series:
        S = x^1 - x^2 + x^3 - x^4 + x^5 - ............ - x^20; where x = 2
2. Display the series:
        1, 11, 111, 1111, 11111
Enter option: 1
Sum of series = -1048574
*/