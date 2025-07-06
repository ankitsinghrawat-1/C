#include <stdio.h>

int main() 
{
    float F, C;
    printf("Enter temperature in Celcius: ");
    scanf("%f", &C);
    F = (C * 9.0 / 5.0) + 32.0;
    printf("Temperature in Fahrenheit: %.2f", F);
    return 0;
}