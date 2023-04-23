// WAP to take input of 10 number, display product of all numbers divisible by 5.
#include <stdio.h>

int main() {

    int arr[10], product = 1, i;

    printf("Enter 10 numbers : ");
    
    // Taking input of 10 numbers
    for (i = 0; i < 10; i++){
        scanf("%d",&arr[i]);
    }

    // product of numbers,which is multiple of 5
    for (i = 0; i < 10; i++){
        // checking if divisible by 5 using ternary operator
        arr[i]%5 == 0 ? (product *= arr[i]) : (product *= 1);

        // checking if divisible by 5 using if operator
        // if (arr[i]%5 == 0){
        //     // if divisible by 5
        //     product *= arr[i];
        // }
    }    

    // printing result
    printf("Product = %d",product);
    return 0;
}