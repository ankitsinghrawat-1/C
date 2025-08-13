#include <stdio.h>

float c2f(float C);

float c2f(float C) {
    return (C * 9.0 / 5.0) + 32.0;
}
int main() 
{
    float C;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &C);
    printf("Temperature in Fahrenheit: %f\n", c2f(C));
    return 0;
}