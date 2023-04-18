// Write a C program to convert a decimal number into binary. 

#include <stdio.h>

int main() {
    int n = 16;
    int bin[n], num, temp, i;

    printf("Enter a number :");
    scanf("%d",&num);

    for (int k = 0; k < n; k++){
        bin[k] = 0;
    }

    temp = num;
    i = 0;
    do {
        bin[i] = temp%2;
        // printf("bin[%d] = %d \t temp= %d\n",i, bin[i],temp);
        temp /= 2;
        i++;
        
    }while (temp != 0);

    for (i = 0; i < n/2;i++){
        bin[i] = bin[i] + bin[(n-1)-i]; 
        bin[(n-1)-i] = bin[i] - bin[(n-1)-i];
        bin[i] = bin[i] - bin[(n-1)-i]; 
    }


    printf("\n");

    // Output
    printf("%d = ",num);
    for (int j = 0; j < n; j++){
        printf("%d",bin[j]);
    }
    printf("\n");

    return 0;
}