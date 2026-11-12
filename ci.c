#include <math.h>
#include <stdio.h>

int main(void) {
    double principal;
    double rate; // Here rate is rate of interest
    double time;
    double ci;
    double amount;

    char currency;

    printf("Your currency: ");
    scanf(" %c", &currency);

    // Principal
    printf("The principal(don't mention currency): ");
    scanf(" %lf", &principal);

    // Rate of interest
    printf("The rate of interest(don't mention percentage): ");
    scanf(" %lf", &rate);

    // Time
    printf("The time(mention in years, this program doesn't take months or days): ");
    scanf(" %lf", &time);

    ci = principal * (pow(1 + (rate / 100), time) - 1);
    amount = principal + ci;

    printf("Your compound interest is: %.2lf%c\n OR IF YOU PREFER DETAILED %lf%c\n", ci, currency, ci, currency);
    printf("Your amount is: %.2lf%c\n OR IF YOU PREFER DETAILED %lf%c\n", amount, currency, amount, currency);

    return 0;
}