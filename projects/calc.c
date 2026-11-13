#include <stdio.h>

void print_menu(void);

int main(void) {
    double first_num = 0;
    double second_num = 0;
    double result = 0;
    char operator = '\0';

    print_menu();

    printf("Please enter your operator: ");
    scanf(" %c", &operator);

    if (operator != '+' && operator != '-' && operator != '*' && operator != '/' && operator != '%' && operator != '^') {
        printf("Invalid operator!\n");
        return 1;
    }

    printf("Please enter your first number: ");
    scanf(" %lf", &first_num);

    printf("Please enter your second number: ");
    scanf(" %lf", &second_num);

    switch (operator) {
        case '+':
            result = first_num + second_num;
            break;
        case '-':
            result = first_num - second_num;
            break;
        case '*':
            result = first_num * second_num;
            break;
        case '/':
            result = first_num / second_num;
            break;
        case '%':
            if ((int)second_num == 0) {
                printf("Can't divide by zero!");
                return 1;
            }
            result = (int)first_num % (int)second_num;
            break;
        case '^':
            result = (int)first_num ^ (int)second_num;
            break;
    } // No default needed since operator check is already done above!

    printf("The result is: %lf\n", result);

    return 0;
}

void print_menu(void) {
    printf("This is a calculator\n");
    printf("Pick your operator(+, -, *, /, %%, ^)\n");
    printf("A quick FYI\n");
    printf("^ is Bitwise XOR, %% is modulo. And your numbers will be type casted to ints for both.\n");
}