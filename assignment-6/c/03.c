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

    
    int countforstr = 0;
    int count = 0;
    while (s1[count] != '\0'){
        str[countforstr] = s1[count];
        count++;
        countforstr++;
    }
    count = 0;
    while (s2[count] != '\0'){
        str[countforstr] = s2[count];
        count++;
        countforstr++;
    }

    str[countforstr+1] = '\0';


    printf("%s\n", str);

    return 0;
}