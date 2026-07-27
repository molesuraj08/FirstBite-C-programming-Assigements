#include <stdio.h>

void salaryCalculation(float basic)
{
    float hra, da, gross;

    hra = basic * 0.20;
    da = basic * 0.80;
    gross = basic + hra + da;

    printf("\nBasic Salary : %.2f", basic);
    printf("\nHRA : %.2f", hra);
    printf("\nDA : %.2f", da);
    printf("\nGross Salary : %.2f", gross);
}

int main()
{
    float basic;

    printf("Enter Basic Salary : ");
    scanf("%f", &basic);

    salaryCalculation(basic);

    return 0;
}