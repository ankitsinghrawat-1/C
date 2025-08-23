#include <stdio.h>

int main()
{
    char str[100];
    char word;
    int count = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == '\n')
        {
            str[i] = '\0';
            break;
        }
    }

    printf("Enter a character to check its occurence: ");
    scanf(" %c", &word);
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == word)
        {
            count = 1;
        }
        else
        {
            count = -1;
        }
    }
    if (count == 1)
    {
        printf("The character '%c' is present in the string.\n", word);
    }
    else
    {
        printf("The character '%c' is not present in the string.\n", word);
    }
    return 0;
}