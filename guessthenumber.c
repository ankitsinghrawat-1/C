#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
    int num, guessess = 0;
    srand(time(0));

    int random_number = rand() % 100 + 1;
    printf("Welcome to Guess the Number!\n");
    printf("I have selected a number between 1 and 100.\n");
    printf("Try to guess it!\n");

    do {
        printf("Enter your guess: ");
        scanf("%d", &num);

        if (num < random_number) {
            printf("Too low! Try again.\n");
        } else if (num > random_number) {
            printf("Too high! Try again.\n");
        } else {
            printf("Congratulations! You've guessed the number: %d\n", random_number);
        }
        guessess++;
    } while (num != random_number);
    printf("Number of guesses: %d\n", guessess);
    
    return 0;
}