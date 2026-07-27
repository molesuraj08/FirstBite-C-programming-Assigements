#include <stdio.h>

void strong(int n)
{
    int temp, rem, sum = 0, i, fact;

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
        printf("Strong Number");
    else
        printf("Not a Strong Number");
}

int main()
{
    int n;

    printf("Enter Number : ");
    scanf("%d", &n);

    strong(n);

    return 0;
}