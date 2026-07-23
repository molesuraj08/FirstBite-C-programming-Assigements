#include <stdio.h>

int evenOdd(int n)
{
    return n%2;
}

int main()
{
    int n;

    printf("Enter Number : ");
    scanf("%d",&n);

    if(evenOdd(n)==0)
        printf("Even Number");
    else
        printf("Odd Number");

    return 0;
}