#include <stdio.h>

int main()
{
    char str[100];
    char word;
    int count = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n') {
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
            count++;
        }
    }
    printf("The character '%c' occurs %d times in the string.\n", word, count);

    return 0;
}