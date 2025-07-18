#include <stdio.h>
int factorial (int);

int factorial(int x){
    if (x == 0 || x == 1) {
        return 1;
    } else {
        return x * factorial(x - 1);
    }

}

int main() 
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Factorial of %d is %d", n, factorial(n));
    return 0;
}