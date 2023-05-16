// Prompt the user to enter a string
// Convert each lowercase letter to uppercase using ASCII code
// Output the new uppercase string

#include <stdio.h>

int main() {
    char arr[100];

    printf("Enter a string: ");
    scanf("%s", arr);

    int count = 0;
    while (arr[count] != '\0') {
        if (((int)arr[count] >= 97) && ((int)arr[count] <= 122)) {
            arr[count] = (char) ((int)arr[count] - 32);
        }
        count++;
    }

    printf("%s\n", arr);
    return 0;
}

// Example Output:
// Enter a string: hello world
// HELLO WORLD