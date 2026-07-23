#include <stdio.h>

int firstLastSum()
{
    int n, first, last;

    printf("Enter Number : ");
    scanf("%d", &n);

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
    printf("Sum of First and Last Digit = %d", firstLastSum());

    return 0;
}