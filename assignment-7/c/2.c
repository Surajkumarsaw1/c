#include <stdio.h>
#include <math.h>

int reverse(int);

int main()
{
    int num;

    printf("Entee a number : ");
    scanf("%d", &num);
    printf("%d\n", reverse(num));
    return 0;
}

int reverse(int num)
{
    int temp = num, count = 0, rev, temp2 = num, next;

    while (temp != 0)
    {
        count += 1;
        temp /= 10;
    }
    if (count == 0)
    {
        return 0;
    }
    else
    {
        next = (int)num / 10;
        rev = ((temp2 % 10) * pow(10, count-1)) + reverse(next);

        //printf("No of digits : %d\n", count);
        // printf("rev = %d\n",rev);
        return rev;
    }
}