#include <stdio.h>

void display_array(int arr[], int n);

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    printf("Array Elements: ");
    display_array(arr, n);
    return 0;
}

void display_array(int arr[], int n) {
    if (n == 1)
        printf("%d ", arr[0]);
    else {
        display_array(arr, n - 1);
        printf("%d ", arr[n - 1]);
    }
}