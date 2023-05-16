#include <stdio.h>

int main() {
   int a, b;
   printf("Enter the value for a and b: ");
   scanf("%d%d", &a, &b);
   
   a = a + b;
   b = a - b;
   a = a - b;

   printf("a = %d\nb = %d", a, b);
   return 0;
}
// Sample Output:
// Enter the value for a and b: 5 7
// a = 7
// b = 5