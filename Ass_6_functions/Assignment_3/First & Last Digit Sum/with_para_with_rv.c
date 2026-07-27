#include <stdio.h>

int firstLastSum(int n)
{
    int first, last;

    last = n % 10;

    while(n >= 10)
    {
        n = n / 10;
    }

    first = n;

    return first + last;
}

int main()
{
    int n;

    printf("Enter Number : ");
    scanf("%d", &n);

    printf("Sum of First and Last Digit = %d", firstLastSum(n));

    return 0;
}