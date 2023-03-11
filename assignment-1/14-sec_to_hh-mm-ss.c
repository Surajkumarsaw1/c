#include <stdio.h>

void main() {
    int sec,h,m,s;
    printf("Enter value in seconds : ");
	scanf("%d",&sec);
    h = sec/3600;
    m = (sec%3600)/60;
    s = sec%60;
    printf("%d h : %d m : %d s\n",h,m,s);
}