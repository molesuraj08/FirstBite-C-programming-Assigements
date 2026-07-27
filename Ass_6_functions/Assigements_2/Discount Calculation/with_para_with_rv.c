#include <stdio.h>

float discountCalculation(float amount)
{
    float discount;

    if(amount >= 5000)
        discount = amount * 0.20;
    else
        discount = amount * 0.10;

    return amount - discount;
}

int main()
{
    float amount, finalAmount;

    printf("Enter Purchase Amount : ");
    scanf("%f", &amount);

    finalAmount = discountCalculation(amount);

    printf("Final Amount = %.2f", finalAmount);

    return 0;
}