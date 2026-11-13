#include <stdio.h>

float ask_deposit(void);
float ask_withdraw(void);
void print_menu(void);

int main(void) {

    int choice = 0;

    // Float cuz no need for double precision unless you're like a bilionaire
    float balance = 0;
    float to_deposit = 0;
    float to_withdraw = 0;

    print_menu();

    // Changed from while(1) to while (choice != 4) cuz a if then a switch just looked odd
    while (choice != 4) {
        printf("Enter your pick(the number): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("You have %.2f\n", balance); // .2 to round up
                break;
            case 2:
                to_deposit = ask_deposit();
                balance += to_deposit;
                printf("Sucessfully deposited!\n");
                break;
            case 3:
                to_withdraw = ask_withdraw();
                // Makes sure you have enough balance to withdraw
                if (to_withdraw > balance) {
                    printf("Not enough money to withdraw\n");
                }
                else {
                    balance -= to_withdraw;
                    printf("Sucessfully withdrawn!\n");
                }
                break;
            case 4:
                break; // A (technically) blank statement to fix 4 triggering default
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

    while (1) {
        printf("Please enter how much you want to deposit: ");
        scanf("%f", &deposit);

        if (deposit > 0) {
            return deposit;
        }
        else {
            printf("Please enter a number greater than zero!\n");
        }
    }
}

float ask_withdraw(void) {
    float withdraw;

    while (1) {
        printf("Please enter how much you want to withdraw: ");
        scanf("%f", &withdraw);

        if (withdraw > 0) {
            return withdraw;
        }
        else {
            printf("Please enter a number greater than zero!\n");
        }
    }
}

void print_menu(void) {
    printf("Hello welcome to my bank!\n");
    printf("Pick your option\n");
    printf("1. Check Your Balance\n");
    printf("2. Deposit Money\n");
    printf("3. Withdraw Money\n");
    printf("4. Exit\n");
}
