#include <stdio.h>

int main()
{
    int rows = 5;

    int previous_row[rows];
    int current_row[rows];

    // initialise row 2
    previous_row[0] = 1;
    previous_row[1] = 1;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 1; j <= i; j++)
            current_row[j] = previous_row[j - 1] + previous_row[j];

        // set the first and last element of each row as 1
        current_row[0] = 1;
        current_row[i] = 1;

        // print the spaces
        for (int j = rows - i; j > 1; j--)
            printf(" ");

        // print the actual triangle itself
        for (int j = 0; j <= i; j++)
        {
            printf("%d ", current_row[j]);
            previous_row[j] = current_row[j];
        }

        printf("\n");
    }
    return 0;
}