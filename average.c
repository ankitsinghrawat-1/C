#include <stdio.h>
float avg(int, int, int);

float avg(int a, int b, int c){
    // printf("average of %d, %d and %d is \n", a, b, c);
    return (a + b + c)/ 3.0;
}
int main() 
{
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("The average of given numbers are %f \n", avg(a, b, c));
    return 0;
}