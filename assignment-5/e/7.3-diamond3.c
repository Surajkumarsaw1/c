#include <stdio.h>

int main()
{
    int rows = 10;
    int row_ = rows / 2;

    for (int i = 1; i <= row_; i++)
    {
        for (int j = row_ - i; j >= 1; j--)
            printf("  ");
        for (int j = 1; j <= 2 * i - 1; j++)
            printf("%c ", j + 64);
        printf("\n");
    }

    for (int i = 1; i <= row_ - 1; i++)
    {
        for (int j = 1; j <= i; j++)
            printf("  ");
        for (int j = 1; j <= 2 * (row_ - 1 - i) + 1; j++)
            printf("%c ", j + 64);
        printf("\n");
    }
    return 0;
}