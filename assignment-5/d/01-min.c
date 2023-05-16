#include <stdio.h>

int main() {
    int num, p=0, n=0, psum=0, nsum=0;

    // Loop to take input for 15 numbers
    for (int i = 1; i <= 15; i++){
        printf("Enter number %d : ",i);
        scanf("%d",&num);
        
        // Check if number is positive
        if ( num > 0 ){
            p++;
            psum += num;
        }
        // Check if number is negative
        else if ( num < 0 ){
            n++;
            nsum += num;
        }
        printf("+ve no: %d, +ve sum : %d, -ve no. : %d, -ve sum: %d\n",p,psum,n,nsum);
    }
    // Print output
    printf("Number of positive numbers : %d\n",p);
    printf("Number of negative numbers : %d\n",n);
    printf("Sum of positive numbers : %d\n",psum);
    printf("Sum of negative numbers : %d\n",nsum);
    
    return 0;
}

// Output :
// Enter number 1 : 5
// +ve no: 1, +ve sum : 5, -ve no. : 0, -ve sum: 0
// Enter number 2 : -1
// +ve no: 1, +ve sum : 5, -ve no. : 1, -ve sum: -1
// Enter number 3 : 4
// +ve no: 2, +ve sum : 9, -ve no. : 1, -ve sum: -1
// Enter number 4 : -10
// +ve no: 2, +ve sum : 9, -ve no. : 2, -ve sum: -11
// Enter number 5 : 0
// +ve no: 2, +ve sum : 9, -ve no. : 2, -ve sum: -11
// Enter number 6 : 4
// +ve no: 3, +ve sum : 13, -ve no. : 2, -ve sum: -11
// Enter number 7 : 3
// +ve no: 4, +ve sum : 16, -ve no. : 2, -ve sum: -11
// Enter number 8 : -2
// +ve no: 4, +ve sum : 16, -ve no. : 3, -ve sum: -13
// Enter number 9 : 1
// +ve no: 5, +ve sum : 17, -ve no. : 3, -ve sum: -13
// Enter number 10 : 2
// +ve no: 6, +ve sum : 19, -ve no. : 3, -ve sum: -13
// Enter number 11 : 3
// +ve no: 7, +ve sum : 22, -ve no. : 3, -ve sum: -13
// Enter number 12 : -4
// +ve no: 7, +ve sum : 22, -ve no. : 4, -ve sum: -17
// Enter number 13 : 7
// +ve no: 8, +ve sum : 29, -ve no. : 4, -ve sum: -17
// Enter number 14 : -11
// +ve no: 8, +ve sum : 29, -ve no. : 5, -ve sum: -28
// Enter number 15 : 5
// +ve no: 9, +ve sum : 34, -ve no. : 5, -ve sum: -28
// Number of positive numbers : 9
// Number of negative numbers : 5
// Sum of positive numbers : 34
// Sum of negative numbers : -28