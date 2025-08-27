/*Experiment 2.2*/
/*wap to calculate simple interest*/
#include <stdio.h>

int main() {
    float principal, rate, time, si;
    printf("Enter principal amount: ");
    scanf("%f", &principal);
    printf("Enter interest rate: ");
    scanf("%f", &rate);
    printf("Enter time period (in years): ");
    scanf("%f", &time);
    si = (principal * rate * time) / 100;
    printf("Simple Interest is: %f\n", si);
    return 0;
}

