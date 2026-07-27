#include <stdio.h>

void factorial(int n)
{
    int i;
    long long fact = 1;

    for(i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    printf("Factorial = %lld", fact);
}

int main()
{
    int n;

    printf("Enter Number : ");
    scanf("%d", &n);

    factorial(n);

    return 0;
}