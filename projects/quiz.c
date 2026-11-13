#include <ctype.h>
#include <stdio.h>

int main(void) {

    char questions[][100] = {"What is the value of 2 + 2?", "What is the value of 34 * 52?", "What is 2 ^ 10?", "Is 2 = 2?"};

    char options[][100] = {"A. 22\nB. 4\nC. 5\nD. 21", "A. 3452\nB. 1836\nC. 1768\nD. 5234", "A. 210\nB. 1024\nC. 512\nD. 2048", "A. Yes\nB. No\nC. Maybe\nD. Sometimes"};

    char ans_key[] = {'B', 'C', 'B', 'A'};

    int question_count = sizeof(questions) / sizeof(questions[0]);
    char guess = '\0';
    int score = 0;

    printf("Quiz Game!\n");

    for (int i = 0; i < question_count; i++) {
        printf("\n%s\n", questions[i]);
        printf("\n%s\n", options[i]);

        printf("Enter your answer: ");
        scanf(" %c", &guess); // space so that \n is ignored.

        if (toupper(guess) == ans_key[i]) {
            score++;
            printf("Correct!!\n");
        }
        else {
            printf("Invalid answer!\n");
        }
    }

    printf("Your score is %d out of %d\n", score, question_count);
    return 0;
}
