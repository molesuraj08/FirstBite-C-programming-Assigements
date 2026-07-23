#include <stdio.h>

void firstLastSum()
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

    printf("Sum of First and Last Digit = %d", first + last);
}

int main()
{
    firstLastSum();

    return 0;
}