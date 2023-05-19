/*
Write a C program to find largest value between two numbers using function.
*/

#include <stdio.h>

int largest(int num1, int num2);

int main() {
    int a, b;
    int (*fp)(int,int);
    fp = largest;
    printf("Enter two numbers : ");
    scanf("%d%d", &a, &b);
    printf("Largest number : %d\n", fp(a,b));
    return 0;
}

int largest(int num1, int num2){
    int l;
    l = (num1 > num2 ? num1 : num2);
    return l;
}