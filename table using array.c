#include <stdio.h>

void table(int arr[3][10], int mul[]);

void table(int arr[3][10], int mul[])
{
    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 10; j++)
        {

            arr[i][j] = mul[i] * (j + 1);
        }
    }
}

int main()
{
    int arr[3][10];
    int mul[3] = {};
    printf("enter the three numbers for the multiplication table:\n");
    scanf("%d %d %d", &mul[0], &mul[1], &mul[2]);
    printf("The multiplication table is:\n");
    table(arr, mul);
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}