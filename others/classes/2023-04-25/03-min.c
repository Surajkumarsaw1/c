/* 
The code concatenates two strings using strcat function and prints the final result using printf function
*/
#include <stdio.h>
#include <string.h>
 
int main()
{
    char s[] = "Geeks";
    char s1[] = "forGeeks";
    strcat(s, s1);
    printf("Final string is: %s\n", s);
    return 0;
}
// Output: Final string is: GeeksforGeeks