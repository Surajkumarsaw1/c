// Prompt the user to enter a string
// Count the number of vowels and consonants in the string using ASCII code
// Output the total count of vowels and consonants found

#include <stdio.h>

int main() {
    int v = 0, c = 0, isvowel = 0;
    char arr[100];
    char vowel[] = {'A', 'E', 'I', 'O', 'U', 'a', 'e', 'i', 'o', 'u'};

    printf("Enter a string: ");
    scanf("%s", arr);

    int count = 0;
    while (arr[count] != '\0') {
        if ((((int)arr[count] >= 65) && ((int)arr[count] <= 90)) || (((int)arr[count] >= 97) && ((int)arr[count] <= 122))) {
            isvowel = 0;
            for (int i = 0; i < 10; i++) {
                if (arr[count] == vowel[i]) {
                    isvowel = 1;
                    break;
                }
            }
            if (isvowel == 1) {
                v++;
            }
            else {
                c++;
            }
        }
        count++;
    }

    printf("Vowels: %d\n", v);
    printf("Consonants: %d\n", c);
    return 0;
}

// Example Output:
// Enter a string: hello world
// Vowels: 3
// Consonants: 7