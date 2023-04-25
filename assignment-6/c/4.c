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

    int diff = 0;
    int count = 0;
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
        printf("Both strings are same.\n");
    }
    else {
        printf("difference at position : %d\n",diff);
    }

    return 0;
}