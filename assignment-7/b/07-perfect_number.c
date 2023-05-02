/*
Write a C program to check whether a number is perfect number or not using function.
*/

#include <stdio.h>

void ifperfect(int *);

int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    ifperfect(&n);
    return 0;
}

void ifperfect(int *num)
{
    int hcf_sum = 0;
    for (int i = 1; i < (*num); i++)
    {
        if ((*num) % i == 0)
        {
            hcf_sum += i;
        }
    }
    if (hcf_sum == (*num))
    {
        printf("Perfect number.\n");
    }
    else
    {
        printf("Not a perfect number.\n");
    }
}