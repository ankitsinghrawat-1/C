#include <stdio.h>

int main() 
{
    int number, factorial = 1;
    printf("Enter a positive integer: ");
    scanf("%d", &number);
    if (number < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return 1;
    }
    for (int i = 1; i <= number; i++)
    {
        factorial *= i;
    }
    printf("The factorial of %d is %d", number, factorial);
    
    return 0;
}