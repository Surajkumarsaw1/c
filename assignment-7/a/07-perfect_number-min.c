/*
Check whether a given number is Perfect number or not using function
*/

#include <stdio.h>

void ifperfect(int);

int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    ifperfect(num);
    return 0;
}

void ifperfect(int num)
{
    int sum = 0;
    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            sum += i;
        }
    }
    if (sum == num)
    {
        printf("%d is a Perfect number.\n", num);
    }
    else
    {
        printf("%d is Not a Perfect number.\n", num);
    }
}

// Output :
// Enter a number : 28
// 28 is a Perfect number.