// Write a C program to take an array as input haveing size 20 add all indexs of array where prime no is present using function

#include <stdio.h>

static int n = 4;

int is_prime(int);
int prime_sum(int arr[], int size);

int main()
{
    int nums[n], sum = 0;
    ;
    printf("Enter %d numbers : ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    printf("Sum : %d\n", prime_sum(nums, n));
    return 0;
}

int prime_sum(int arr[], int size)
{
    int i, sum = 0;

    for (i = 0; i < size; i++)
    {
        if (is_prime(arr[i]))
        {
            sum += arr[i];
        }
    }

    return sum;
}

int is_prime(int num)
{
    int prime = 1;

    for (int i = 2; i < (num / 2) + 1; i++)
    {
        if (num % i == 0)
        {
            prime = 0;
            break;
        }
    }
    return prime;
}