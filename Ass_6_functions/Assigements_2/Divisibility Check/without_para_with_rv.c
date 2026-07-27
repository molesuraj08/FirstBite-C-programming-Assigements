#include <stdio.h>

int divisibilityCheck()
{
    int num;

    printf("Enter Number : ");
    scanf("%d", &num);

    if(num % 5 == 0 && num % 11 == 0)
        return 1;
    else
        return 0;
}

int main()
{
    if(divisibilityCheck())
        printf("Number is Divisible by 5 and 11");
    else
        printf("Number is Not Divisible by 5 and 11");

    return 0;
}