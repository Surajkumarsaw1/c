// Write a C program to search a given number using linear search.
#include <stdio.h>

int main() {
    int n;
    // taking size of array from user
    printf("Enter the size of array : ");
    scanf("%d",&n);
    
    int arr[n], i, swap, num;

    printf("Enter %d numbers : ", n);

    for (i = 0; i< n; i++){
        scanf("%d",&arr[i]);
    }

    printf("Enter the value to search : ");
    scanf("%d",&num);

    // linear search
    for (i = 0; i < n; i++){
        if ( num == arr[i]){
            printf("%d is present at postion %d or index %d\n", num, i+1, i);
            break;
        }
        if (i == n-1){
            printf("%d is not present in the list\n",num);
        }
    }

    return 0;
}

/* Output
Enter the size of array : 4
Enter 4 numbers : 2 6 9 1
Enter the value to search : 6
6 is present at postion 2 or index 1
*/