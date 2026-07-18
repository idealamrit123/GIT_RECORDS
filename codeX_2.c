#include <stdio.h>

int main(void)
{
    float principal, rate, time;
    float simpleInterest, amount;

    printf("Enter principal: ");
    if (scanf("%f", &principal) != 1) {
        return 1;
    }

    printf("Enter rate (percent): ");
    if (scanf("%f", &rate) != 1) {
        return 1;
    }

    printf("Enter time (years): ");
    if (scanf("%f", &time) != 1) {
        return 1;
    }

    simpleInterest = principal * rate * time / 100.0f;
    amount = principal + simpleInterest;

    printf("Simple Interest = %.2f\n", simpleInterest);
    printf("Amount = %.2f\n", amount);

    return 0;
}
