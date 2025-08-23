#include <stdio.h>

typedef struct vector {
    int i;
    int j;
} vec;

struct vector vector_addition(vec a, vec b, vec *result) {
    (*result).i = a.i + b.i;    //both methods are same
    result->j = a.j + b.j;
}
int main() 
{
    vec a, b;
    vec result;
    printf("Enter the components of vector a (i j): ");
    scanf("%d %d", &a.i, &a.j);

    printf("Enter the components of vector b (i j): ");
    scanf("%d %d", &b.i, &b.j); 

    printf("Vector a: %di + %dj\n", a.i, a.j);
    printf("Vector b: %di + %dj\n", b.i, b.j);

    vector_addition(a, b, &result);
    printf("The sum of the vectors a and b is: %di + %dj\n", result.i, result.j);
    return 0;
}