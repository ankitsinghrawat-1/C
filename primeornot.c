#include <stdio.h>

int main() 
{
    int n, i;
    printf("Enter the number: ");
    scanf("%d", &n);
    for ( i = 2; i < n ; i++)
    {
        if (n % n == 0 && n % 1 == 0 && n % i != 0)
        {
            printf("%d is a prime number\n", n);
            break;
        }
        else {
            printf("The %d is not a Prime Number\n", n);
            break;
        }
    }

    return 0;
}