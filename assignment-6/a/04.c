/*Write a C program to store 10 numbers
(including positive and negative numbers) in a 1- Dimensional Array.
Display all the negative numbers followed by the positive numbers
without changing the order of the numbers.
*/
#include <stdio.h>

int main()
{
    int temp, i, j, n = 10;
    int arr[n];

    printf("Enter %d numbers : ", n);

    // takes input
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++)
    {
        for (i = 2; i < arr[i] / 2; i++)
        {
            if (arr[i] % i == 0)
            {
                return 0;
            }
        }
    }

    // printing result
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

/* Output :
Enter 10 numbers : 1 2 3 4 5 -6 -7 -8 -9 10
-6 -7 -8 -9 1 2 3 4 5 10
*/