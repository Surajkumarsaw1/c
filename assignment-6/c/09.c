/*
Write a C program to count total number of words in a string.
*/
#include <stdio.h>

int main()
{
    char arr[100];
    printf("Enter a sentence : ");
    fgets(arr, 100, stdin);
    // printf("%s", arr);
    int isspace = 1, isprevspace, words = 0;

    int count = 0;
    while (arr[count] != '\0')
    {
        isprevspace = isspace;
        if (arr[count] == ' ')
        {
            isspace = 1;
        }
        else{
            isspace = 0;
        }
        // printf("arr[count] = %d, perv = %d, now = %d\n", arr[count], isprevspace, isspace);
        if ((isprevspace == 1) && (isspace == 0))
        {
            words++;
        }
        count++;
    }
    printf("Total Words : %d\n", words);
    return 0;
}

/* Output
Enter a sentence : Jai Shree Ram
Total Words : 3
*/