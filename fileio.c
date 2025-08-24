#include <stdio.h>

int main() 
{
    FILE *file;
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (file == NULL){
        printf("Error opening file!\n");
        return 1;
    }

    file = fopen("file.txt", "w");
    for(int i = 0; i < 10; i++){
        fprintf(file, "%d X %d = %d", num, (i+1), num*(i+1));
        fprintf(file, "\n");
    }
    fclose(file);

    file = fopen("file.txt", "r");
    while(1){
        char ch = fgetc(file);
        if(ch == EOF){
            break;
        }
        printf("%c", ch);
    }
    return 0;
}