#include <stdio.h>

int main() {
    int temp, arr[] = {1, 2, 3, 4, 5, -6, -7, -8, -9, 10}, n = sizeof(arr)/sizeof(arr[0]); 

    for (int i=0; i<n; i++) {
        for (int j=0; j<n-1; j++) {
            if ((arr[j]>0) && (arr[j+1]<0)) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    for (int i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
// Output: -6 -7 -8 -9 1 2 3 4 5 10 