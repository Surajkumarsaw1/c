/*
Write a C program to count total number of vowels and consonants in a string.
*/

#include <stdio.h>

int main()
{
    int v = 0, c = 0, isvowel = 0;
    char arr[100];
    char vowel[] = {'A', 'E', 'I', 'O', 'U', 'a', 'e', 'i', 'o', 'u'};

    printf("Enter a string : ");
    scanf("%s", arr);
    // printf("%s\n", arr);

    int count = 0;
    while (arr[count] != '\0')
    {

        if ((((int)arr[count] >= 65) && ((int)arr[count] <= 90)) || (((int)arr[count] >= 97) && ((int)arr[count] <= 122)))
        {
            isvowel = 0;
            for (int i = 0; i < 10; i++)
            {
                // printf("arr[count] = %c == vowel[i] = %c;\n", arr[count], vowel[i]);
                if (arr[count] == vowel[i])
                {
                    isvowel = 1;
                    break;
                }
            }
            if (isvowel == 1)
            {
                v++;
            }
            else
            {
                c++;
            }
        }

        count++;
    }

    printf("vowels : %d\n", v);
    printf("consonants : %d\n", c);
}