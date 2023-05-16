#include <stdio.h>

int main() {
   char str[50];

   printf("Enter a string: ");

   fgets(str, 50, stdin); // using fgets instead of gets

   printf("You entered: %s\n", str); // display the entered string

   return 0;
}
// Output:
// Enter a string: Hello World
// You entered: Hello World