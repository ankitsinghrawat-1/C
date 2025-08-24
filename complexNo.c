#include <stdio.h>

typedef struct complex{
    float real;
    float imag;

}com;

void display(com c[], int size);

void display(com c[], int size){
    for (int i = 0; i < size; i++){
        printf("Complex number: %.2f + %.2fi\n", c[i].real, c[i].imag);
    }
}
int main() 
{

    com c[5];

    for (int i = 0;i < 5; i++){
        printf("Enter the real and imaginary parts of complex number %d:", i + 1);
        scanf("%f %f ", &c[i].real, &c[i].imag);
    }

    printf("\nThe complex numbers are:\n");
    display(c, 5);
    return 0;

}