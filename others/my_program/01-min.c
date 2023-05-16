#include <stdio.h>
#include <math.h>

void sop(int num);

int main() {
   char op;
   int result, code, num;

   printf("WELCOME\n");
   printf("Select OP: NUMBER(N) / Pattern / Array\n");
   scanf("%c", &op);

   if (op == 'N') {
      printf("Commencing operation Enter code: ");
      scanf("%d", &code);

      if (code == 0) {
         printf("Code=1 for single digit operation info\n");
         printf("Code=2 for double digit calculation info\n");
         printf("Code=3 for Area and perimeter calculation of square,rectangle,circle\n");
      }

      if (code == 1) {
         printf("Enter number to know information: ");
         scanf("%d", &num);
         sop(num);
      }
   }

   return 0;
}

void sop(int num) {
   int temp, i, cmp, temp1, s = 0, r, fact = 1, temp2, temp3;
   int arm = 0, rem, tot = 0, digit, count = 0, sum = 0;

   float rt;

   printf("NUMBER ENTERED: %d\n", num);

   (num % 2 == 0) ? printf("Number is even\n") : printf("Number is odd\n");