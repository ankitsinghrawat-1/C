#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    char random_choice, player1_choice, player2_choice;
    int round = 0, player1_score = 0, computer_score = 0, player2_score = 0;
    int n;

    srand(time(0));

    printf("Hello Player\n");
    printf("Welcome to the game of Snake Water Gun\n");
    printf("rules are simple\n");
    printf("Snake drinks Water\n");
    printf("Water damages Gun\n");
    printf("Gun kills Snake\n");
    printf("You have to choose one among snake, water and gun\n");
    printf("You can also play against the computer and a another player too\n");
    printf("You will be having 10 chances\n");
    printf("Get ready for the play");
    printf("You will have to enter your choice in small letters only\n");

    printf("\"s\" for snake\n");
    printf("\"w\" for water\n");
    printf("\"g\" for gun\n");
    printf("and \"q\" for qutting the game anytime\n");

    printf("if you want to player with computer press 1 and if you want play with another player press 2\n");
    scanf("%d", &n);

    if (n != 1 && n != 2)
    {
        printf("invalid input\n");
        return 0;
    }

    else if (n == 1)
    {
        for (int i = 0; i < 10; i++){

            int random_number = rand() % 3;

        if (random_number == 0)
        {
            random_choice = 's';
        }
        else if (random_number == 1)
        {
            random_choice = 'w';
        }
        else
        {
            random_choice = 'g';
        }
        {
            printf("Enter your choice (s, w, g): ");
            scanf(" %c", &player1_choice);

            if (player1_choice != 's' && player1_choice != 'w' && player1_choice != 'g' && player1_choice != 'q')
            {
                printf("Invalid input! Please enter 's', 'w', 'g', or 'q'.\n");
                i--; // To not count this as a valid round
                continue;
            }
            
            if (player1_choice == 'q')
            {
                printf("You chose to quit the game. Thanks for playing!\n");
                break;
            }
            printf("Computer chose: %c\n", random_choice);
            if (player1_choice == random_choice)
            {
                printf("It's a tie!\n");
            }
            else if ((player1_choice == 's' && random_choice == 'w') ||
                     (player1_choice == 'w' && random_choice == 'g') ||
                     (player1_choice == 'g' && random_choice == 's'))
            {
                printf("You win this round!\n");
                player1_score++;
            }
            else
            {
                printf("Computer wins this round!\n");
                computer_score++;
            }
        }
    }
    printf("Final Scores - You: %d, Computer: %d and ties: %d\n", player1_score, computer_score, 10 - (player1_score + computer_score));
    if (player1_score > computer_score)
    {
        printf("Congratulations! You won the game!\n");
    }
    else if (player1_score < computer_score)
    {
            printf("Computer wins the game! Better luck next time.\n");
        }
        else
        {
            printf("The game is a tie!\n");
        }
    }
    
    else if (n == 2)
    {
        for (int i = 0; i < 10; i++)
        {
            printf("Player 1, enter your choice (s, w, g): ");
            scanf(" %c", &player1_choice);
            if (player1_choice != 's' && player1_choice != 'w' && player1_choice != 'g' && player1_choice != 'q')
            {
                printf("Invalid input! Please enter 's', 'w', 'g', or 'q'.\n");
                i--; // To not count this as a valid round
                continue;
            }
            
            
            if (player1_choice == 'q')
            {
                printf("Player 1 chose to quit the game. Thanks for playing!\n");
                break;
            }
            printf("Player 2, enter your choice (s, w, g): ");
            scanf(" %c", &player2_choice);
            if (player2_choice != 's' && player2_choice != 'w' && player2_choice != 'g' && player2_choice != 'q')
            {
                printf("Invalid input! Please enter 's', 'w', 'g', or 'q'.\n");
                i--; // To not count this as a valid round
                continue;
            }
            if (player2_choice == 'q')
            {
                printf("Player 2 chose to quit the game. Thanks for playing!\n");
                break;
            }
            if (player1_choice == player2_choice)
            {
                printf("It's a tie!\n");
            }
            else if ((player1_choice == 's' && player2_choice == 'w') ||
                     (player1_choice == 'w' && player2_choice == 'g') ||
                     (player1_choice == 'g' && player2_choice == 's'))
            {
                printf("Player 1 wins this round!\n");
                player1_score++;
            }
            else
            {
                printf("Player 2 wins this round!\n");
                player2_score++;
            }
        }
        printf("Final Scores - Player 1: %d, Player 2: %d and ties: %d\n", player1_score, player2_score, 10 - (player1_score + player2_score));
        if (player1_score > player2_score)
        {
            printf("Congratulations! Player 1 won the game!\n");
        }
        else if (player1_score < player2_score)
        {
            printf("Congratulations! Player 2 won the game!\n");
        }
        else
        {
            printf("The game is a tie!\n");
        }
    }
    
    return 0;
}