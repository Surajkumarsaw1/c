/*Write a C program to store 20 numbers in a 1- Dimensional Array. 
Display the largest and smallest value from that array.
*/
#include <stdio.h>

int main() {
    int arr[20], s =0 , l=0, i, n=20;

    printf("Enter 20 numbers : ");

    // takes 20 input
    for ( i = 0; i < n;i++){
        scanf("%d", &arr[i]);
    }

    // comparision for even or odd
    s = arr[0];
    l = arr[0];
    for ( i = 0; i < 20; i++){
        // comparision using ternary operator
        arr[i] < s ? (s = arr[i]) : (s = s);
        arr[i] > l ? (l = arr[i]) : (l = l);

    }

    // printing result
    printf("Smallest number : %d\n",s);
    printf("Largest number : %d\n",l);
    return 0;
}

/* Output : 
Enter 20 numbers : 1 2 3 4 5 6 7 8 9 0 0 9 8 7 6 5 4 3 2 1 
Smallest number : 0
Largest number : 9
*/