#include <stdio.h>

void factorial()
{
    int n, i;
    long long fact = 1;

    printf("Enter Number : ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    printf("Factorial = %lld", fact);
}

int main()
{
    factorial();

    return 0;
}