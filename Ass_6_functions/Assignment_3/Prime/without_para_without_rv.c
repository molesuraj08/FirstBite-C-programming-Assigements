#include <stdio.h>

void prime()
{
    int n, i, flag = 1;

    printf("Enter Number : ");
    scanf("%d", &n);

    if(n <= 1)
    {
        printf("Not a Prime Number");
        return;
    }

    for(i = 2; i <= n / 2; i++)
    {
        if(n % i == 0)
        {
            flag = 0;
            break;
        }
    }

    if(flag)
        printf("Prime Number");
    else
        printf("Not a Prime Number");
}

int main()
{
    prime();
    return 0;
}