// Write a C program to sort the given array. (Ascending)
#include <stdio.h>

int main() {
    int n;
    // taking size of array from user
    printf("Enter the size of array : ");
    scanf("%d",&n);
    
    int arr[n], i, swap;

    printf("Enter %d numbers : ", n);

    for (i = 0; i< n; i++){
        scanf("%d",&arr[i]);
    }

    // bubble sort
    for (int c = 0; c < n-1; c++){
        for (int d = 0; d < n-c-1; d++){
            if ( arr[d] > arr[d+1]){
                swap  = arr[d];
                arr[d] = arr[d+1];
                arr[d+1]= swap;
            }
        }
    }

    // printing output
    for (i = 0; i< n; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");

    return 0;
}

/* Output
Enter the size of array : 4
Enter 4 numbers : 1 9 4 7
1 4 7 9 
*/