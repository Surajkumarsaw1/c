#include <stdio.h>
#include <string.h>

int main() {
    char s1[100];
    char s2[100];

    printf("Enter a string : ");
    scanf("%s", s1);
    printf("%s\n", s1);

    int len = 0, arrlen;
    while (s1[len] != '\0'){
        len++;
    }

    int count = len;
    while (count-1 >= 0)
    {
        // printf("s2[%d]",count-1);
        s2[count-1] = s1[len-count];
        count--;
    }
    s2[len] = '\0';
    
    printf("Reversed string : %s\n",s2);

    return 0;
}