#include <stdio.h>

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j < i; j++)
            printf("  ");
        for (int j = 1; j <= 2 * (5 - i) + 1; j++)
            printf("%c ", j + 64);
        printf("\n");
    }

    for (int i = 2; i <= 5; i++)
    {
        for (int j = 1; j <= 5 - i; j++)
            printf("  "); // added readability indentation
        for (int j = 1; j <= 2 * i - 1; j++)
            printf("%c ", j + 64);
        printf("\n");
    }
    return 0;
}
// Output:
// A B C D E F G 
//   A B C D E 
//     A B C 
//       A 
//     A B C 
//   A B C D E 
// A B C D E F G