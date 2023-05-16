#include <stdio.h>

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j < i; j++)
            printf("  ");
        for (int j = 1; j <= 2 * (5 - i) + 1; j++)
            printf("%d ", j);
        printf("\n");
    }

    for (int i = 2; i <= 5; i++)
    {
        for (int j = 1; j <= 5 - i; j++)
            printf("  "); // added readability indentation
        for (int j = 1; j <= 2 * i - 1; j++)
            printf("%d ", j);
        printf("\n");
    }
    return 0;
}
// Output:
// 1 2 3 4 5 6 7 
//   1 2 3 4 5 
//     1 2 3 
//       1 
//     1 2 3 
//   1 2 3 4 5 
// 1 2 3 4 5 6 7