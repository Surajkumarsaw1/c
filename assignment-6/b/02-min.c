#include <stdio.h>

int main() {
    int n;
    
    printf("Enter the size of array : ");
    scanf("%d",&n);
    
    int arr[n], i, swap;

    printf("Enter %d numbers : ", n);

    for (i = 0; i< n; i++){
        scanf("%d",&arr[i]);
    }

    for (int c = 0; c < n-1; c++){
        for (int d = 0; d < n-c-1; d++){
            if ( arr[d] > arr[d+1]){
                swap  = arr[d];
                arr[d] = arr[d+1];
                arr[d+1]= swap;
            }
        }
    }

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