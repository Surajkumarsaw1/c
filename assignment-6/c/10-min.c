// C program to reverse a string

#include <stdio.h>
#include <string.h>

void reverse_string(char s1[], char s2[]) {
    // function to reverse a string
    int len = strlen(s1);
    for (int i = 0; i < len; i++) {
        s2[i] = s1[len-i-1];
    }
    s2[len] = '\0';
}

int main() {
    char s1[100], s2[100];

    printf("Enter a string: ");
    scanf("%s", s1);

    reverse_string(s1, s2);

    printf("Reversed string: %s\n", s2);

    return 0;
}

/* Output:
Enter a string: Reversed
Reversed string: desreveR
*/