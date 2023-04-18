// Write a C program to reverse the array.

#include <stdio.h>

int main() {
    int n;
    // taking size of array from user
    printf("Enter the size of array : ");
    scanf("%d",&n);
    
    int arr[n], i;

    printf("Enter %d numbers : ", n);

    for (i = 0; i< n; i++){
        scanf("%d",&arr[i]);
    }

    // swapping or reversing
    for (i = 0; i < n/2;i++){
        arr[i] = arr[i] + arr[(n-1)-i]; 
        arr[(n-1)-i] = arr[i] - arr[(n-1)-i];
        arr[i] = arr[i] - arr[(n-1)-i]; 
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
Enter 4 numbers : 1 3 6 9
9 6 3 1 
*/