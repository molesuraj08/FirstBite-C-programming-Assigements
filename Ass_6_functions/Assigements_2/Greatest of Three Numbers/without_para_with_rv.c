#include <stdio.h>

int greatest()
{
    int a, b, c;

    printf("Enter Three Numbers : ");
    scanf("%d%d%d", &a, &b, &c);

    if(a >= b && a >= c)
        return a;
    else if(b >= a && b >= c)
        return b;
    else
        return c;
}

int main()
{
    printf("Greatest Number = %d", greatest());

    return 0;
}