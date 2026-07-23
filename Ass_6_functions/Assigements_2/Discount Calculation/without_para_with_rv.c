#include <stdio.h>

float discountCalculation()
{
    float amount, discount;

    printf("Enter Purchase Amount : ");
    scanf("%f", &amount);

    if(amount >= 5000)
        discount = amount * 0.20;
    else
        discount = amount * 0.10;

    return amount - discount;
}

int main()
{
    float finalAmount;

    finalAmount = discountCalculation();

    printf("Final Amount = %.2f", finalAmount);

    return 0;
}