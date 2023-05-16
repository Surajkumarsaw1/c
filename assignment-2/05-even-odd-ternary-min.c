#include <stdio.h>

int main() {
    int num;
    printf("Enter value of num: ");
    scanf("%d", &num);
    
    //check if the number is even or odd using bitwise AND operator
    (num & 1) ? printf("The number is odd.\n") : printf("The number is even.\n");
    return 0;
}

/*
Sample Input/Output:
Enter value of num: 6
The number is even.
*/