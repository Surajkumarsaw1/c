#include <stdio.h>

int is_palindrome(int num);

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (is_palindrome(num))
        printf("%d is a palindrome number.\n", num);
    else
        printf("%d is not a palindrome number.\n", num);
    return 0;
}

int reverse(int n, int temp) {
    if (n == 0)
        return temp;
    else
        return reverse(n / 10, temp * 10 + n % 10);
}

int is_palindrome(int num) {
    if (num == reverse(num, 0))
        return 1;
    else
        return 0;
}