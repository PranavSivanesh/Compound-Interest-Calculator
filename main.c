#include <stdio.h>
#include <math.h>

int main(){
    double principal = 0.0;
    double rate = 0.0;
    int timesCompounded = 0;
    int years = 0;
    double amount = 0.0;

    printf("Compound Interest Calculator\n");

    printf("Enter your principal amount (P):");
    scanf("%lf", &principal);

    printf("Enter your interest rate % (r):");
    scanf("%lf", &rate);
    rate = rate/100;

    printf("Enter the number of times compounded/year (n):");
    scanf("%d", &timesCompounded);

    printf("Enter the duration (in years) this money is invested or borrowed (t):");
    scanf("%d", &years);

    amount = principal * pow((1 + (rate/timesCompounded)), timesCompounded * years);

    printf("After %d years, the amount will be %.2lf", years,amount);
    
    return 0;
}