#include <stdio.h>

int prime()
{
    int n, i, flag = 1;

    printf("Enter Number : ");
    scanf("%d", &n);

    if(n <= 1)
        return 0;

    for(i = 2; i <= n / 2; i++)
    {
        if(n % i == 0)
        {
            flag = 0;
            break;
        }
    }

    return flag;
}

int main()
{
    if(prime())
        printf("Prime Number");
    else
        printf("Not a Prime Number");

    return 0;
}