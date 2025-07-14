#include <stdio.h>

int main() 
{
    int number, sum = 0;
    printf("Enter an number: ");
    scanf("%d", &number);
    for (int i = 1; i <= number; i++){
        sum += i;
    }
    printf("The sum of first %d numbers is: %d",number ,sum);
    return 0;
}