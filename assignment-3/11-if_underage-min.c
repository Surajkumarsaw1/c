#include <stdio.h>

int main() {
    int age;
    printf("Enter age: ");
    scanf("%d",&age);

    if(age >= 18) {
        printf("Eligible to vote.\n");
    }
    else {
        printf("Not eligible to vote.\n");
    }
    return 0;
}

// Input: 20
// Output: Eligible to vote.