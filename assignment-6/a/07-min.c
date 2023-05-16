#include <stdio.h>
#include <math.h>

int main() {
    int i, n = 20, count = 0, arr[] = {4, 7, 16, 21, 25, 9, 36, 1, 100, 10, 49, 64, 81, 144, 196, 225, 256, 277, 52, 200};
    float sqroot;
    
    int perfectSquares[n]; // Perfect square array

    for (i = 0; i < n; i++) {
        sqroot = sqrt(arr[i]);
        if (sqroot == (int)sqroot) { // If the square root is an integer (i.e., perfect square)
            perfectSquares[count] = arr[i];
            ++count;
        }
    }

    printf("Perfect Squares : ");
    for (i = 0; i < count; i++) {
        printf("%d ", perfectSquares[i]);
    }
    printf("\n");

    return 0;
}
// Output: Perfect Squares : 4 16 25 36 1 100 49 64 81 144 196 225 256