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
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); 
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == '\n') //when we press the enter key, it creates a new line (\n)

        {
            str[i] = '\0'; //and if the enter key is pressed, it replaces \n with \0
            break;
        }
        i++;
    }

    printf("Length of string is: %d\n", strlen(str));

    return 0;
}