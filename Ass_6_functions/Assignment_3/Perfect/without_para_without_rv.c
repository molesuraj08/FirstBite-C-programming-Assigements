#include <stdio.h>

void perfect()
{
    int n, i, sum = 0;

    printf("Enter Number : ");
    scanf("%d", &n);

    for(i = 1; i < n; i++)
    {
        if(n % i == 0)
        {
            sum = sum + i;
        }
    }

    if(sum == n)
        printf("Perfect Number");
    else
        printf("Not a Perfect Number");
}

int main()
{
    perfect();

    return 0;
}