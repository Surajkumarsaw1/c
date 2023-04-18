// WAP to take 10 int numbers and add all two gigit numbers and diplay the result

#include <stdio.h>

int main() {
    int arr[10], sum =0, i, temp, count;

    printf("Enter 10 numbers : ");

    // taking 10 input
    for ( i = 0; i < 10;i++){
        scanf("%d", &arr[i]);
    }

    for ( i = 0; i < 10; i++){

        // storing value of arr[i] in temp variable
        temp = arr[i];

        // counting digits
        for ( count = 0; temp != 0; count++){
            temp/=10;
        }

        // checking if 2 digit number 
        count == 2 ? (sum += arr[i]) : (sum += 0);

        // checking if 2 digit number using if else

        // if (count == 2){
        //     // if 2 digit number
        //     sum += arr[i];
        // }
        
    }
    printf("Sum of all two digit numbers : %d", sum);
    return 0;
}