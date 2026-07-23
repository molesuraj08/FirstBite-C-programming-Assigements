#include <stdio.h>

void firstLastSum(int n)
{
    int first, last;

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
    int n;

    printf("Enter Number : ");
    scanf("%d", &n);

    firstLastSum(n);

    return 0;
}