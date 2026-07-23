#include <stdio.h>

long long factorial()
{
    int n, i;
    long long fact = 1;

    printf("Enter Number : ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    return fact;
}

int main()
{
    printf("Factorial = %lld", factorial());

    return 0;
}