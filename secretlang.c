#include <stdio.h>
#include <string.h>

void encrypt(char *str)
{
    for (int i = 0; i < strlen(str); i++)
    {
        str[i] = str[i] + 1;
    }
}

void decrypt(char *str)
{
    for (int i = 0; i < strlen(str); i++)
    {
        str[i] = str[i] - 1;
    }
}

int main()
{
    char str[500];
    int choice;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    printf("Choose an option:\n1. Encrypt\n2. Decrypt\n");
    scanf("%d", &choice);
    if (choice == 1)
    {
        encrypt(str);
        printf("Your encrypted message is: %s\n", str);
    }
    else
    {
        printf("Your decrypted message is: %s\n", str);
        decrypt(str);
    }

    printf("Thank you for using our service!\n");
    printf("%s", str);
    return 0;
}