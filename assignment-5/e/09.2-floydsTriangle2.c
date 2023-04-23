#include <stdio.h>

int main()
{
    int index = 1;
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%c ", index + 64);
            index++;
        }
        printf("\n");
    }
    return 0;
}