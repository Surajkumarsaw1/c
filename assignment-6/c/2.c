#include <stdio.h>
#include <string.h>

int main() {
    // char s1[] = "Re"; 
    // char s2[] = "Do";
    // printf("%s\n", s1);
    // printf("%s\n", s2);

    char string[100];

    printf("Enter a string : ");
    scanf("%s",string);
    // printf("%s\n", string);

    int count = 0;

    while (string[count] != '\0'){
        count++;
    }

    // printf("%d\n",count);

    char copystr[100];

    for (int i = 0; i <= count; i++){
        copystr[i] = string[i];
    }

    printf("input string = %s\n", string);
    printf("copy  string = %s\n", copystr);

    return 0;
}