#include <stdio.h>

void find_min_max(int arr[], int n, int *min, int *max);

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    int min, max;
    find_min_max(arr, n, &min, &max);
    printf("Minimum element in array: %d\n", min);
    printf("Maximum element in array: %d\n", max);
    return 0;
}

void find_min_max(int arr[], int n, int *min, int *max) {
    if (n == 1) {
        *min = arr[0];
        *max = arr[0];
    } else {
        find_min_max(arr, n - 1, min, max);
        if (arr[n - 1] > *max)
            *max = arr[n - 1];
        if (arr[n - 1] < *min)
            *min = arr[n - 1];
    }
}