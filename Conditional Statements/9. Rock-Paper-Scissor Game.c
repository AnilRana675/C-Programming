//Rock-Paper-Scissors Game: Create a simple Rock-Paper-Scissors game against the computer.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int user_choice, computer_choice;
    char choices[] = {'r', 'p', 's'};  // Array to represent choices as characters

    srand(time(NULL));  // Seed the random number generator

    printf("Name: Anil Rana\nRoll no: 2\nDescription: Rock-Paper-Scissors Game");

    printf("Welcome to Rock-Paper-Scissors!\n");

    do {
        printf("\nChoose your move:\n");
        printf("1. Rock\n");
        printf("2. Paper\n");
        printf("3. Scissors\n");
        printf("Enter your choice (1-3): ");
        scanf("%d", &user_choice);

        // Input validation
        if (user_choice < 1 || user_choice > 3) {
            printf("Invalid choice. Please try again.\n");
            continue;
        }

        computer_choice = rand() % 3;  // Generate random choice for computer

        printf("You chose %c, computer chose %c.\n", choices[user_choice - 1], choices[computer_choice]);

        // Determine the winner
        if (user_choice == computer_choice) {
            printf("It's a tie!\n");
        } else if ((user_choice == 1 && computer_choice == 2) ||
                   (user_choice == 2 && computer_choice == 3) ||
                   (user_choice == 3 && computer_choice == 1)) {
            printf("You win!\n");
        } else {
            printf("Computer wins!\n");
        }

        printf("Play again? (y/n): ");
    } while (getchar() == 'y');

    printf("Thanks for playing!\n");

    return 0;
}
