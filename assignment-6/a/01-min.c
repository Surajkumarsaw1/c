#include <stdio.h>

int main() {
    int arr[20], sodd = 0, seven = 0;
    printf("Enter 20 numbers : ");
    for (int i = 0; i < 20; i++) scanf("%d", &arr[i]);
    for (int i = 0; i < 20; i++) arr[i] % 2 == 0 ? (seven += arr[i]) : (sodd += arr[i]);
    printf("Sum of odd numbers : %d\nSum of even numbers : %d", sodd, seven);
    return 0;
}