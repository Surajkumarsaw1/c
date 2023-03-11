#include <stdio.h>

int main() {
    char ch;
    printf("Enter a char : ");
    scanf("%c",ch);
    if ( ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'){
        printf("Vowel\n");
    }
    else{
        printf("Consonant\n");
    }
    return 0;
}