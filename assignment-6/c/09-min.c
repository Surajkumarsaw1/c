/*
Write a C program to count total number of words in a string.
*/

#include <stdio.h>

int main()
{
    char sentence[100];

    printf("Enter a sentence : ");
    fgets(sentence, 100, stdin);

    int prev_space = 1, curr_space, num_words = 0, i = 0;

    while (sentence[i] != '\0')
    {
        curr_space = (sentence[i] == ' ');

        if(prev_space == 1 && curr_space == 0) {
            num_words++;
        }
        
        prev_space = curr_space;
        i++;
    }

    printf("Total Words : %d\n", num_words);
    return 0;
}

/* Output
Enter a sentence : Jai Shree Ram
Total Words : 3
*/