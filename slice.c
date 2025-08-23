#include <stdio.h>

void slice (char arr[], int m , int n);

void slice (char arr[], int m , int n) 
{ 
    int i = 0; 
    while ((i + m) < n) 
    { 
        arr[i] = arr[i + m]; 
        i++; 
    } 
    arr[i] = '\0'; 
}


int main() 
{
    char arr[100];
    int m, n;
    printf("Enter a string: ");
    fgets(arr, sizeof(arr), stdin);
    printf("Enter the slicing indices (m n): ");
    scanf("%d %d", &m, &n);
    slice(arr, m, n);
    printf("Sliced string: %s\n", arr);

    return 0;
}
