// WAP to take 20 int number in an array add all even num separately and add all odd  separately and display there sums.

#include <stdio.h>

int main() {
    int arr[20], sodd =0 , seven=0, i;
    for ( i = 0; i < 20;i++){
        scanf("%d", &arr[i]);
    }
    for ( i = 0; i < 20; i++){
        arr[i]%2 == 0 ? (seven += arr[i]) : (sodd += arr[i]);
    }
    printf("Sum of odd numbers : %d\n",sodd);
    printf("Sum of even numbers : %d\n",seven);
    return 0;
}