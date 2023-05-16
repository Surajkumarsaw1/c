#include <stdio.h>

int main()
{
    int rows = 5;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows - i; j++)
        {
            printf("  ");
        }
        for (int j = 0; j < 2 * i - 1; j++)
        {
            printf("%c ", 65 + j);
        }
        printf("\n");
    }
    return 0;
}
// Output:
//         A 
//       A B C 
//     A B C D E 
//   A B C D E F G 
// A B C D E F G H I