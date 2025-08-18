#include <stdio.h>


void swap(int*, int*);

void swap(int* x, int* y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    printf("After swapping: x = %d, y = %d\n", *x, *y);

}
int main() 
{
    int a, b;
    int *p1 = &a, *p2 = &b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    printf("Before swapping: x = %d, y = %d\n", a, b);
    swap(p1, p2);
    
    return 0;
}