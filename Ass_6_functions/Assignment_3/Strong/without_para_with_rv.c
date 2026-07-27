#include <stdio.h>

int strong()
{
    int n, temp, rem, sum = 0, i, fact;

    printf("Enter Number : ");
    scanf("%d", &n);

    temp = n;

    while(n != 0)
    {
        rem = n % 10;
        fact = 1;

        for(i = 1; i <= rem; i++)
        {
            fact = fact * i;
        }

        sum = sum + fact;
        n = n / 10;
    }

    if(sum == temp)
        return 1;
    else
        return 0;
}

int main()
{
    if(strong())
        printf("Strong Number");
    else
        printf("Not a Strong Number");

    return 0;
}