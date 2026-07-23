#include <stdio.h>

float salaryCalculation(float basic)
{
    float hra, da;

    hra = basic * 0.20;
    da = basic * 0.80;

    return basic + hra + da;
}

int main()
{
    float basic, gross;

    printf("Enter Basic Salary : ");
    scanf("%f", &basic);

    gross = salaryCalculation(basic);

    printf("Gross Salary = %.2f", gross);

    return 0;
}