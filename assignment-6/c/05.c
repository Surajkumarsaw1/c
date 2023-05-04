/*
Write a C program to convert lowercase string to uppercase.
*/

#include <stdio.h>

int main()
{
    char arr[100];

    printf("Enter a string : ");
    scanf("%s", arr);
    // printf("%s\n", arr);

    int count = 0;
    while (arr[count] != '\0')
    {

        if (((int)arr[count] >= 97) && ((int)arr[count] <= 122))
        {
            arr[count] = (char) ((int)arr[count] - 32);
        }

        count++;
    }
    printf("%s\n", arr);
    return 0;
}