#include <stdio.h>

int main() {
    int arr[20], s, l, i;
    printf("Enter 20 numbers: ");
    for (i = 0; i < 20; i++) {
        scanf("%d", &arr[i]);
    }
    s = l = arr[0];
    for (i = 0; i < 20; i++) {
        if (arr[i] < s) s = arr[i];
        if (arr[i] > l) l = arr[i];
    }
    printf("Smallest number: %d\nLargest number: %d\n", s, l);
    return 0;
}