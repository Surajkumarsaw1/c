// WAP to take 20 int number in an array add all even num separately and add all odd  separately and display there sums.

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


        // comparision using if else operator for even or odd
        // if ( arr[i] == 0){
        //     // if even 
        //     seven += arr[i];
        // }
        // else{
        //     // if odd
        //     sodd += arr[i];
        // }
    }

    // printing result
    printf("Sum of odd numbers : %d\n",sodd);
    printf("Sum of even numbers : %d\n",seven);
    return 0;
}