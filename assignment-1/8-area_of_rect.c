#include <stdio.h>

void main() {
    float l,w;
    printf("Enter the length and width of rectangle : ");
    scanf("%f%f",&l,&w);
    printf("Area : %f\nPerimeter : %f\n",l*w, 2*(l+w));
}