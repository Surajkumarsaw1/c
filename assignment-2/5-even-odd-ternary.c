#include <stdio.h>

void main() {
    int num;
    printf("Enter value of num : ");
    scanf("%d",&num);
    num%2==0 ? printf("Even\n"):printf("Odd\n") ;
}

// #include <stdio.h>
  
// void main()
// {
//     int num;
//     printf("Enter value of num : ");
//     scanf("%d",&num);
//     (num & 1) ? printf("Odd") : printf("Even");
// }