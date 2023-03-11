#include <stdio.h>
#include <math.h>

int main() {
    int l,b;
    printf("Enter length and breadth of rectangle : ");
    scanf("%d%d",&l,&b);

    
    printf("1. Area\n");
    printf("2. Perimeter\n");
    printf("3. Diagonal\n");

    int op;
    printf("Enter a option : \n");
    scanf("%d",op);

    switch (op) {
        case 1:
            printf("Area : %d\n", l*b);
            break;
        case 2:
            printf("Perimeter : %d\n", 2*(l+b));
            break;
        case 3:
            printf("Diagonal : %d\n", sqrt((l*l)+(b*b)));
        default:
            printf("Invalid option.\n");
    }

    return 0;
}