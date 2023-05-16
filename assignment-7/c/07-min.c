/*
Prints the elements of an integer array using recursion.
*/

#include <stdio.h>

void displayArray(int arr[], int n) {
    if (n == 0) {
        return;
    }
    displayArray(arr, n - 1);
    printf("%d ", arr[n - 1]);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;

    printf("Array Elements: ");
    displayArray(arr, n);

    return 0;
}

/* Output
Array Elements: 1 2 3 4 5
*/