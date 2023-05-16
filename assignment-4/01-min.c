// Code to find largest among three numbers using if-else ladder
#include <stdio.h>

// main function
int main() {
    int a,b,c;

    // taking input from user
    printf("Enter three number : ");
    scanf("%d%d%d",&a,&b,&c);

    // comparing and finding largest number
    if (a > b && a > c){
        printf("largest no = %d\n",a);
    }
    else if (b > a && b > c){
        printf("largest no = %d\n",b);
    }
    else {
        printf("largest no = %d\n",c);
    }
    return 0;
}

// Output:
// Enter three number : 3 8 5
// largest no = 8