#include <stdio.h>

float force(float);
float force(float mass){
    return mass * 9.81; // Assuming the force is calculated using F = m * g, where g = 9.81 m/s^2
}
int main() 
{
    float mass;
    printf("Enter the mass in gram: \n");
    scanf("%f", &mass);
    printf("The force is: %.2f N\n", force(mass));
    return 0;
}