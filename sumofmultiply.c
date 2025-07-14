#include <stdio.h>

int main() 
{
    int number ,sum = 0;
    printf("Enter an integer: ");
    scanf("%d", &number);
    for (int i = 1; i <= 10; i++){
        sum += number*i;
    }
    printf("The sum of the first 10 multiples of %d is: %d", number, sum);
    return 0;
}