#include <stdio.h>

void find_min_max(int arr[], int n, int *min, int *max) {
    *min = arr[0];
    *max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > *max)
            *max = arr[i];
        if (arr[i] < *min)
            *min = arr[i];
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    int min, max;
    find_min_max(arr, n, &min, &max);
    printf("Minimum element in array: %d\n", min);
    printf("Maximum element in array: %d\n", max);
    return 0;
}

// Output:
// Minimum element in array: 1
// Maximum element in array: 5.