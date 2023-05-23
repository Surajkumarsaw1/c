#include <stdio.h>

#define PI 3.14

float circle(float r, char op);

int main() {
    float r;
    float (*fp)(float,char);
    fp = circle;
    printf("Enter radius: ");
    scanf("%f", &r);

    printf("Diameter: %.2f\nCircumference: %.2f\nArea: %.2f\n", fp(r, 'd'), fp(r,'c'), fp(r,'a'));
    return 0;
}

float circle(float r, char op){
    switch(op){
        case 'd': return 2*r;
                  break;
        case 'c': return PI*2*r;
                  break;
        case 'a': return PI*r*r;
                  break;
        default: printf("Error: Invalid option\n");
                 return -1;
    }
}