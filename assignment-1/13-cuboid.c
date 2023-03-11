#include <stdio.h>

void main() {
    float l,b,h;
    printf("Enter value of  length, breadth and height : ");
	scanf("%f%f%f",&l,&b,&h);
    printf("Volume : %f\n",l*b*h);
    printf("Surface Area : %f\n",2*((l*b)+(l*h)+(b*h)));
}