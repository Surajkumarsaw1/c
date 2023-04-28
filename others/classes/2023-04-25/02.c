#include <stdio.h>

int main () {
   char str[50];

   printf("Enter a string : ");

   // using gets genrates warning
   
   gets(str);

   printf("You entered: %s\n", str);

   return(0);
}