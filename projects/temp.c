#include <stdio.h>

void print_menu(void);

int main(void) {
    int choice = 0;
    double fahrenheit;
    double celsius;

    print_menu();

    printf("Please enter your choice(1 or 2) ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Please enter your temperature(don't mention units!!) ");
            scanf(" %lf", &celsius);

            fahrenheit = (celsius * 9.0 / 5.0) + 32;

            printf("The temperature in fahrenheit is %lf\n", fahrenheit);
            break;
        case 2:
            printf("Please enter your temperature(don't mention units!!) ");
            scanf(" %lf", &fahrenheit);

            celsius = (fahrenheit - 32) * 5.0 / 9.0;

            printf("The temperature in celsius is %lf\n", celsius);
            break;
        default:
            printf("Please enter a valid choice!\n");
    }

    return 0;
}
void print_menu(void) {
    printf("Temperature converter\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
}