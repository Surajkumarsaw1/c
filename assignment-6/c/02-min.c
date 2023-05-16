// C program to copy a string to another string

#include <stdio.h>
#include <string.h>

int main() {
    char string[100], copystr[100];

    printf("Enter a string: ");
    scanf("%s", string);

    // Method 1: using strcpy()
    // strcpy(copystr, string);

    // Method 2: using a loop
    int len = strlen(string);
    for (int i = 0; i <= len; i++) {
        copystr[i] = string[i];
    }

    printf("Input string = %s\n", string);
    printf("Copy string = %s\n", copystr);

    return 0;
}

/* Output:
Enter a string: Hello
Input string = Hello
Copy string = Hello
*/