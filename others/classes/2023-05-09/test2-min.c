#include <stdio.h>

int count(int num);
int resum(int num);

int main() {
    printf("Enter a number: ");
    int num;
    scanf("%d", &num);
    printf("Repeated sum until 1 digit: %d\n", resum(num));
    return 0;
}

int count(int num) {
    int count = 0;
    while (num) {
        ++count;
        num /= 10;
    }
    return count;
}

int resum(int num) {
    while (count(num) > 1) {
        int temp = num, sum = 0;
        while (temp) {
            sum += temp % 10;
            temp /= 10;
        }
        num = sum;
    }
    return num;
}