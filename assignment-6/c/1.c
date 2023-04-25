#include <stdio.h>

int main() {
    // char greetings[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};
    // char string[] = "Orange";

    char string[100];

    printf("Enter a string : ");
    scanf("%s",string);
    printf("%s\n", string);

    int count = 0;
    while (string[count] != '\0'){
        count++;
    }
    printf("lenght = %d\n", count);
    return 0;
}