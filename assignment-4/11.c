#include <stdio.h>

int main() {
    int a,b,op;
    printf("Enter two angles : ");
    scanf("%d%d",&a,&b);

    printf("Enter 1 to check complementary.\n");
    printf("Enter 2 to check supplementary.\n>>> ");
    scanf("%d",&op);

    switch (op){
        case 1:
            if ((a+b)==90){
                printf("Angles are complementary\n");
            }
            else {
                printf("Angles are not complementary\n");
            }
        case 2:
            if ((a+b)==180){
                printf("Angles are supplementary.\n");
                break;
            }
            else {
                printf("Not supplementary\n");
                break;
            }
        default :
            printf("Invalid choice\n");
            break;
    }
    return 0;
}