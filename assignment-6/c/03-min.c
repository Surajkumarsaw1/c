// C program to concatenate two strings

#include <stdio.h>
#include <string.h>

int main() {
    char s1[100], s2[100], str[200];
    
    printf("Enter a string: ");
    scanf("%s", s1);

    printf("Enter another string: ");
    scanf("%s", s2);

    strcat(str, s1);
    strcat(str, s2);

    printf("Concatenated string: %s\n", str);

    return 0;
}

/* Output:
Enter a string: Hello
Enter another string: World
Concatenated string: HelloWorld
*/