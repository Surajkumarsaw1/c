#include <stdio.h>
#include <math.h>

int main()
{
    printf("Enter a number : ");
    int a;
    scanf("%d",&a);
    printf("1. Square\n");
    printf("2. Cube\n");
    printf("3. Square root\n");
    printf("4. Cube root\n\n");
    printf("Enter your choice : ");
    int b;
    scanf("%d",&b);
    switch(b)
    {
        case 1:
        printf("square=%d\n", a*a );
        break;
        case 2:
        printf("cube=%d\n", a*a*a );
        break;
        case 3:
        printf("square root=%f\n",sqrt(a));
        break;
        case 4:
        printf("cube root=%f\n",cbrt(a));
        break;
        default:
        printf("Invalid option.\n");
    }
}