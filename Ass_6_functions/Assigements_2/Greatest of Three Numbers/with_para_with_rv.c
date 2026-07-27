#include <stdio.h>

int greatest(int a, int b, int c)
{
    if(a >= b && a >= c)
        return a;
    else if(b >= a && b >= c)
        return b;
    else
        return c;
}

int main()
{
    int a, b, c;

    printf("Enter Three Numbers : ");
    scanf("%d%d%d", &a, &b, &c);

    printf("Greatest Number = %d", greatest(a, b, c));

    return 0;
}