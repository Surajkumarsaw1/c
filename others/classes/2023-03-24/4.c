#include <stdio.h>

int main() {
    
    for (int i =1; i<=5;i++){
        for (int k = 5-i; k>0; k--){
            printf("  ");
        }
        int c = 'A';
        for (int j = 1;j<=i; j++){
            printf("%c ",c++);
        }
        printf("\n");
    }
    return 0;
}

/*
        A 
      A B 
    A B C 
  A B C D 
A B C D E 
*/