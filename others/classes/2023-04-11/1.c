// sum of 10 numbers using arrays.

#include <stdio.h>

int main() {
    int arr[10], sum=0, i;
    printf("Enter 10 numbers : ");
    for (i = 0; i<10; i++){
        scanf("%d", &arr[i]);
    }
    for (i = 0; i<10; i++){
        sum += arr[i];
    }
    printf("Sum = %d\n", sum);
    return 0;
}