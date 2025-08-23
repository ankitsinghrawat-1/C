#include <stdio.h>

void mystrcpy(char target[], char source[]);

void mystrcpy(char target[], char source[]) {

    int i = 0;
    for (i = 0; source[i] != '\0'; i++) {
        target[i] = source[i];
    }
    }
int main() 
{
    char source[100];
    char target[100];
    printf("Enter a string: ");
    fgets(source, sizeof(source), stdin);
    printf("You entered: %s", source);
    mystrcpy(target, source);
    printf("Copied string is: %s", target);

    return 0;
}