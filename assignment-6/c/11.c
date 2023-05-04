/*
Write a C program to check whether a string is palindrome or not.
*/
#include <stdio.h>
#include <string.h>

int main() {
    char s1[100];
    char s2[100];

    printf("Enter a string : ");
    scanf("%s", s1);
    // printf("%s\n", s1);

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

    int diff = 0;
    count = 0;
    while (diff == 0){
        count++;
        // printf("s1[count]==%c && s2[count]==%c \t count = %d\n",s1[count], s2[count], count);

        if (s1[count-1]=='\0' && s2[count-1]=='\0'){
            break;
        }
        else if ( s1[count-1] == s2[count-1]){
            continue;
        }
        else{
            diff = count;
        }
    }

    if (diff == 0){
        printf("String is palandrome.\n");
    }
    else {
        printf("Not a palandrome string.\n");
    }

    return 0;
}

/* Output
Enter a string : arora
Reversed string : arora
String is palandrome.
*/