#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int psuedo_rand(int min, int max) {
    int random;

    while ((random = rand() % max) < min) {
        random = rand() % max;
    }

    return random;
}

int main(void) {

    srand(time(NULL)); // Random seed.

    int min_num = 0;
    int max_num = 99999999;
    int user_num;

    printf("Hello! Welcome to the number guessing game!\n");
    printf("You get infinite tries!\n");

    // Get the minimum number
    printf("Enter the minimum number(or enter zero for the default): ");
    scanf("%d", &min_num);

    // Get the maximum number
    printf("Enter the maximum number: ");
    scanf("%d", &max_num);

    printf("Before we start, the max number will be excluded!\n");

    // Setting the random number
    int random = psuedo_rand(min_num, max_num);

    // Main loop
    while (1) {
        printf("Enter your guess between %d - %d: ", min_num, max_num);
        scanf("%d", &user_num); // Takes user input and stores it in user_num

        if (user_num == random) {
            printf("Congrats!\n"); // Congratulates the user on getting the correct num
            break;
        }
        else if (user_num < random) {
            printf("Too low!\n"); // Informs the user that their guess is too low
            min_num = user_num;
        }
        else {
            printf("Too high!\n"); // Informs the user that the guess is too high
            max_num = user_num;
        }
    }

    return 0; // Returns 0, 0 means success.
}