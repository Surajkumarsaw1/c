// Prompt the user to enter a string
// Convert each uppercase letter to lowercase using ASCII code
// Output the new lowercase string

#include <stdio.h>

int main() {
    char arr[100];

    printf("Enter a string: ");
    scanf("%s", arr);

    int count = 0;
    while (arr[count] != '\0') {
        if (((int)arr[count] >= 65) && ((int)arr[count] <= 90)) {
            arr[count] = (char) ((int)arr[count] + 32);
        }

        count++;
    }
    printf("%s\n", arr);
    return 0;
}

// Example Output:
// Enter a string: VERY IMPORTANT MESSAGE
// very important message