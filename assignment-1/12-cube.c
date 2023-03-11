#include <stdio.h>

void main() {
    float a;
    printf("Enter length of one side of a cube : ");
	scanf("%f",&a);
    printf("Volume : %f \nSurface Area : %f\n",a*a*a ,6*a*a);
}