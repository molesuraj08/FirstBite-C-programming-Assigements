#include <stdio.h>

void divisibilityCheck()
{
    int num;

    printf("Enter Number : ");
    scanf("%d", &num);

    if(num % 5 == 0 && num % 11 == 0)
        printf("%d is Divisible by 5 and 11", num);
    else
        printf("%d is Not Divisible by 5 and 11", num);
}

int main()
{
    divisibilityCheck();
    return 0;
}