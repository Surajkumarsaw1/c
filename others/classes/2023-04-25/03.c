#include <stdio.h>
#include <string.h>
 
int main()
{
 
    char s[] = "Geeks";
    char s1[] = "forGeeks";
 
    // concatenating the string
    strcat(s, s1);
    printf("Final string is: %s ", s);
    return 0;
}