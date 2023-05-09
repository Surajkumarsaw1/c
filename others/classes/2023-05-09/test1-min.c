#include <stdio.h>

static int n = 20;
int is_prime(int);
int prime_index_sum(int arr[], int size);

int main() {
    int arr[n];
    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    printf("Sum of indexes where prime number is present is: %d\n", prime_index_sum(arr, 20));
    return 0;
}

int is_prime(int num) {
    if (num < 2) return 0;
    for (int i = 2; i <= num / 2; i++)
        if (num % i == 0) return 0;
    return 1;
}

int prime_index_sum(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++)
        if (is_prime(arr[i])) sum += i;
    return sum;
}