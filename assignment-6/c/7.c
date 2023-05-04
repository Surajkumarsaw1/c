/*
Write a C program to find total number of alphabets, digits, or special character in a string.
*/

#include <stdio.h>

int main()
{
    int alpha = 0, digit = 0, special = 0;
    char arr[100];

    printf("Enter a string : ");
    scanf("%s", arr);
    // printf("%s\n", arr);

    int count = 0;
    while (arr[count] != '\0')
    {

        if ((((int)arr[count] >= 65) && ((int)arr[count] <= 90)) || (((int)arr[count] >= 97) && ((int)arr[count] <= 122)))
        {
            alpha++;
        }
        else if (((int)arr[count] >= 48) && ((int)arr[count] <= 57))
        {
            digit++;
        }
        else
        {
            special++;
        }

        count++;
    }

    printf("Alphabets : %d\n", alpha);
    printf("digits : %d\n",digit);
    printf("Special : %d\n", special);
}