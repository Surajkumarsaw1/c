#include <stdio.h>
#include <string.h>

int main() {
    // char s1[] = "Re"; 
    // char s2[] = "Do";
    // printf("%s\n", s1);
    // printf("%s\n", s2);

    char s1[100];
    char s2[100];

    printf("Enter a string : ");
    scanf("%s", s1);
    printf("%s\n", s1);

    printf("Enter a string : ");
    scanf("%s", s2);
    printf("%s\n", s2);

    printf("%s\n", s1);
    printf("%s\n", s2);

    char str[199];

    
    int i = 0;
    int count = 0;
    while (s1[count] != '\0'){
        str[i] = s1[count];
        count++;
        i++;
    }
    count = 0;
    while (s2[count] != '\0'){
        str[i] = s2[count];
        count++;
        i++;
    }

    str[i+1] = '\0';


    printf("%s\n", str);

    return 0;
}