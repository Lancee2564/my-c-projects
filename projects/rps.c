#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int psuedo_rand(int min, int max);

int main(void) {

    char choices[4] = "rps"; // rps\0 hence 4 bytes
    char user_choice;

    int user_score = 0;
    int comp_score = 0;

    srand(time(NULL)); // Sets the seed for random as the current time
    printf("Welcome to rock paper scissors!\n");
    printf("Score will be displayed computer - user!\n");

    while (1) {
        printf("Enter r or p or s or e(for exit) (nothing bigger, also lowercase): ");
        scanf(" %c", &user_choice); // Takes user input and stores it in user_choice

        if (user_choice != 'r' && user_choice != 'p' && user_choice != 's' && user_choice != 'e') {
            printf("Invalid input!\n");
            return 1;
        } // Returns invalid input on unrecognised characters

        // Gives final verdict and breaks the loop
        if (user_choice == 'e') {
            if (comp_score > user_score) {
                printf("You lost\n");
            }
            else if (comp_score == user_score) {
                printf("Tie!\n");
            }
            else {
                printf("You won!\n");
            }

            break;
        }

        // Calculates the random letter
        char comp_choice = choices[psuedo_rand(0, 3)];

        // Tie scenario where both sides pick the same option, no scores awarded
        if (user_choice == comp_choice) {
            printf("The computer had picked %c\n", comp_choice);
            printf("Tie!\n");
            printf("The score now is %d - %d\n", comp_score, user_score);
        }
        // All user win possibilities (r, s), (p, r), (s, p)
        else if ((user_choice == 'r' && comp_choice == 's') || (user_choice == 'p' && comp_choice == 'r') || (user_choice == 's' && comp_choice == 'p')) {
            printf("The computer had picked %c\n", comp_choice);
            printf("You won!\n");
            user_score++;
            printf("The score now is %d - %d\n", comp_score, user_score);
        }
        // If it doesn't match any conditions then it is easy to see that it is a loss
        else {
            printf("The computer had picked %c\n", comp_choice);
            printf("Aww you lost!\n");
            comp_score++;
            printf("The score now is %d - %d\n", comp_score, user_score);
        }
    }
    return 0; // Returns 0 as success
}

int psuedo_rand(int min, int max) {
    int random;
    // Takes modulo of random num(hence smaller than max) then makes sure it's larger than the minimum
    while ((random = rand() % max) < min) {
        ; // Blank body since the while loop performs everything anyway
    }

    return random;
}