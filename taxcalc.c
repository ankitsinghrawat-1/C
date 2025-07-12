#include <stdio.h>

int main() 
{
    int salary, income, tax;
    printf("Enter your salary:");
    scanf("%d", &salary);
    income = salary*12;
    if (income < 250000){
        printf("You don't have to pay tax\n");
    }
    else if (income >= 250000 && income < 500000){
        printf("You have to pay 5%% tax\n");
        tax = income * 0.05;
        printf("Your tax is %d\n", tax);
    }
    else if (income >= 500000 && income < 1000000){
        printf("You have to pay 10%% tax\n");
        tax = income * 0.10;
        printf("Your tax is %d\n", tax);
    } 
    else {
        printf("You have to pay 30%% tax\n");
        tax = income * 0.30;
        printf("Your tax is %d\n", tax);
    }
    return 0;
}