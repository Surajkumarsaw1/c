#include <stdio.h>

#define MAX_BITS 16

int main() {
    int num, i;
    int binary[MAX_BITS] = {0};

    printf("Enter a number: ");
    scanf("%d", &num);

    i = 0;
    do {
        binary[i] = num % 2;
        num /= 2;
        i++;
    } while (num != 0 && i < MAX_BITS);

    // reverse array
    for (int j = 0; j < i / 2; j++) {
        binary[j] = binary[j] + binary[i-1-j];
        binary[i-1-j] = binary[j] - binary[i-1-j];
        binary[j] = binary[j] - binary[i-1-j];
    }

    // Output
    printf("%d = ", num);
    for (int j = 0; j < i; j++) {
        printf("%d", binary[j]);
    }
    printf("\n");

    return 0;
}

/* Output
Enter a number: 13
13 = 0000000000001101
*/