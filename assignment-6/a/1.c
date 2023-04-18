// Write a program in C to store 20 numbers (even and odd numbers) in a 1- Dimensional Array. Calculate and display the sum of all even numbers and all odd numbers separately.

#include <stdio.h>

int main() {
    int arr[20], sodd =0 , seven=0, i;

    printf("Enter 20 numbers : ");

    // takes 20 input
    for ( i = 0; i < 20;i++){
        scanf("%d", &arr[i]);
    }

    // comparision for even or odd
    for ( i = 0; i < 20; i++){
        // comparision using ternary operator for even or odd
        arr[i]%2 == 0 ? (seven += arr[i]) : (sodd += arr[i]);
    }

    // printing result
    printf("Sum of odd numbers : %d\n",sodd);
    printf("Sum of even numbers : %d\n",seven);
    return 0;
}

/* Output : 
Enter 20 numbers : 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19
Sum of odd numbers : 100
Sum of even numbers : 90
*/