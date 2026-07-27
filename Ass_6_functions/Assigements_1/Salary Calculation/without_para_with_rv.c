#include <stdio.h>

float salaryCalculation()
{
    float basic, hra, da, gross;

    printf("Enter Basic Salary : ");
    scanf("%f", &basic);

    hra = basic * 0.20;
    da = basic * 0.80;

    gross = basic + hra + da;

    return gross;
}

int main()
{
    float gross;

    gross = salaryCalculation();

    printf("Gross Salary = %.2f", gross);

    return 0;
}