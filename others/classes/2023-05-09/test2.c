#include <stdio.h>

int count(int num);
int resum(int num);

int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    printf("Repetaive sum until 1 digit : %d\n", resum(num));
    return 0;
}

int resum(int num)
{

    int sum = 0;
    while (count(num) > 1)
    {
        int temp = num;
        sum = 0;
        while (count(temp) > 0)
        {
            sum += temp % 10;
            temp /= 10;
        }
        num = sum;
        // printf("num = %d\n",num );
    }
    return sum;
}

int count(int num)
{
    int count = 0, temp, numc;
    numc = num;

    while (numc != 0)
    {
        count += 1;
        numc /= 10;
    }
    // printf("Count of %d : %d\n", num, count);
    return count;
}