#include <stdio.h>

void printarray(int arr[], int size);

void printaarray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void reverse (int arr[], int size);

void reverse(int arr[], int size) {

    for (int i = 0; i < size / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }
}

int main() 
{
    int size=6;
    int arr[] = {1, 2, 3, 4, 5, 6};
    printaarray(arr, 6);
    reverse(arr, 6);
    printaarray(arr, 6);
    return 0;
}