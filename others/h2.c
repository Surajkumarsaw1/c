#include <stdio.h>

int main()
{
    float c,f;
    printf("\nEnter temperature in Fahrenheit = ");
    scanf("%f",&f);
    c = (f-32)/1.8;
    printf("\nThe equivalent temperature in celcius is %0.2f",c);
    return 0;
}