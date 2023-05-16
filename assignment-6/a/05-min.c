#include <stdio.h>

int main() {
    int i, j, n = 20, count = 0, prime;
    int arr[] = {17, 23, 10, 13, 55, 7, 19, 3, 29, 11, 31, 5, 47, 67, 73, 89, 97, 2, 61, 83};

    int primeArr[n]; // Prime array
    for (i = 0; i < n; i++) {
        prime = 1; // Assume it's prime
        for (j = 2; j <= (arr[i] / 2); j++) {
            if (arr[i] % j == 0) {
                prime = 0; // Mark it as not prime
                break;
            }
        }
        if (prime == 1) {
            primeArr[count] = arr[i];
            ++count;
        }
    }

    printf("Prime numbers : ");
    for (i = 0; i < count; i++) {
        printf("%d ", primeArr[i]);
    }
    printf("\n");

    return 0;
}
// Output: Prime numbers : 17 23 13 7 19 3 29 11 31 5 47 67 73 89 97 2 61 83