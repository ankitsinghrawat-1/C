#include <stdio.h>

int fibbonacci(int);
int fibbonacci(int n)
{
    if (n == 2 || n == 1)
    {
        return n;
    }
    else
    {
        return fibbonacci(n - 1) + fibbonacci(n - 2);
    }
        if (n < 0)
        {
            printf("Enter the positive number");
        }

}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Fibonacci of %d is %d\n", n, fibbonacci(n));
    return 0;
}