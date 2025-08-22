#include <stdio.h>

int strlen(char str[]);

int strlen(char str[])
{
    int i = 0, count;
    char c = str[i];
    while (c != '\0')
    {
        c = str[i];
        i++;
    }
    count = i - 1;
    return count;
}

int main()
{
    char str[100]; // Declare a character array to store the input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Take input from the user (up to 99 characters)

    // Remove the trailing newline character added by fgets
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == '\n')
        {
            str[i] = '\0';
            break;
        }
        i++;
    }

    printf("Length of string is: %d\n", strlen(str));

    return 0;
}