#include <stdio.h>

void discountCalculation()
{
    float amount, discount, finalAmount;

    printf("Enter Purchase Amount : ");
    scanf("%f", &amount);

    if(amount >= 5000)
        discount = amount * 0.20;
    else
        discount = amount * 0.10;

    finalAmount = amount - discount;

    printf("\nPurchase Amount = %.2f", amount);
    printf("\nDiscount = %.2f", discount);
    printf("\nFinal Amount = %.2f", finalAmount);
}

int main()
{
    discountCalculation();
    return 0;
}