#include <stdio.h>

int sum_natural(int);
int sum_natural(int n)
{
    if (n <= 1)
    {
        return n;
    }
    else
    {
        return n + sum_natural(n - 1);
    }
}

int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d", &n);
    if (n < 0)
    {
        printf("Please enter a positive integer.\n");
        return 1;
    }
    else
    {
        printf("Sum of natural numbers from 1 to %d is %d\n", n, sum_natural(n));
    }
    return 0;
}