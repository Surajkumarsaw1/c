/* Write a C program to find the occurrence of an integer in the array.
*/

#include <stdio.h>

int main() {

    int n;
    // taking size of array from user
    printf("Enter the size of array : ");
    scanf("%d",&n);

    int arr[n], i, count=0, num;

    printf("Enter %d numbers : ", n);

    for (i = 0; i< n; i++){
        scanf("%d",&arr[i]);
    }

    printf("Enter a number to find it occurrence : ");
    scanf("%d",&num);

    for (int j = 0; j < n; j++){
        if (arr[j] == num){
            count += 1;
        }
    }

    printf("Number of occurrence : %d\n", count);

    return 0;
}