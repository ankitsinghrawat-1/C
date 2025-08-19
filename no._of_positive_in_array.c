#include <stdio.h>

int count(int arr[], int size);

int count(int arr[], int size) {
    int no_of_positive = 0;
    for (int i = 0; i < size; i++) { 
        if(arr[i] > 0)
        {
        no_of_positive++;
    }
}   return no_of_positive;
}

int main() 
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, -1, -2, -3, -4, -5};
    // count(arr, 10);
    printf("Number of positive integers: %d\n", count(arr, 10));

    return 0;
}