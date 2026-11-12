#include <stdio.h>

float ask_deposit(void);
float ask_withdraw(void);
void print_menu(void);

int main(void) {

    int choice = 0;
    float balance = 0;
    float to_deposit = 0;
    float to_withdraw = 0;

    print_menu();

    while (1) {
        printf("Enter your pick(the number): ");
        scanf("%d", &choice);

        if (choice == 4) {
            break;
        }

        switch (choice) {
            case 1:
                printf("You have %f\n", balance);
                break;
            case 2:
                to_deposit = ask_deposit();
                balance += to_deposit;
                printf("Sucessfully deposited!\n");
                break;
            case 3:
                to_withdraw = ask_withdraw();
                balance -= to_withdraw;
                printf("Sucessfully withdrawn!\n");
                break;
            default:
                printf("Invalid input!\n");
                printf("Enter a number through 1 - 4\n");
                break;
        }
    }

    return 0;
}

float ask_deposit(void) {
    float deposit;

    printf("Please enter how much you want to deposit: ");
    scanf("%f", &deposit);

    return deposit;
}

float ask_withdraw(void) {
    float withdraw;

    printf("Please enter how much you want to withdraw: ");
    scanf("%f", &withdraw);

    return withdraw;
}

void print_menu(void) {
    printf("Hello welcome to my bank!\n");
    printf("Pick your option\n");
    printf("1. Check Your Balance\n");
    printf("2. Deposit Money\n");
    printf("3. Withdraw Money\n");
    printf("4. Exit\n");
}