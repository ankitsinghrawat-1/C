#include <stdio.h>

int main() 
{
    int salary;
    double income, tax = 0.0;
    printf("Enter your salary: ");
    scanf("%d", &salary);

    if (salary < 0) {
        printf("Invalid salary. Please enter a non-negative value.\n");
        return 1;
    }

    income = salary * 12;

    if (income > 1000000) {
        tax += (income - 1000000) * 0.30;
        income = 1000000;
    }
    if (income > 500000) {
        tax += (income - 500000) * 0.10;
        income = 500000;
    }
    if (income > 250000) {
        tax += (income - 250000) * 0.05;
    }

    if (tax == 0) {
        printf("You don't have to pay tax.\n");
    } else {
        printf("Your total tax is %.2f\n", tax);
    }

    return 0;
}