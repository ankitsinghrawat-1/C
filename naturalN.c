#include <stdio.h>

int main() 
{
    int num;
    printf("Enter a natural number: ");
    scanf("%d", &num);
    printf("The First natural numbers are:\n");
    if (num < 1) {
        printf("Please enter a natural number greater than 0.\n");
        return 1;
    }
    do{
        printf("%d \n", --num);
    }while(num > 1);
    return 0;
}