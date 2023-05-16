// Prompt the user to enter two strings
// Compare the two strings character by character until a difference is found or both end at the same point
// If the strings are the same, output "Both strings are same."
// If there is a difference, output "difference at position: [index]"

#include <stdio.h>

int main() {
    char s1[100];
    char s2[100];

    printf("Enter a string: ");
    scanf("%s", s1);
    printf("%s\n", s1);

    printf("Enter a string: ");
    scanf("%s", s2);
    printf("%s\n", s2);

    int diff = 0;
    int count = 0;
    while (diff == 0) {
        count++;

        if (s1[count-1] == '\0' && s2[count-1] == '\0') {
            break;
        }
        else if (s1[count-1] == s2[count-1]) {
            continue;
        }
        else {
            diff = count;
        }
    }

    if (diff == 0) {
        printf("Both strings are same.\n");
    }
    else {
        printf("difference at position: %d\n", diff);
    }

    return 0;
}

// Example Output:
// Enter a string: hello
// hello
// Enter a string: heelo
// heelo
// difference at position: 2