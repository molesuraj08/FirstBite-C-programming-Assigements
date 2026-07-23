#include <stdio.h>

void evenOdd(int n)
{
    if(n%2==0)
        printf("Even Number");
    else
        printf("Odd Number");
}

int main()
{
    int n;

    printf("Enter Number : ");
    scanf("%d",&n);

    evenOdd(n);

    return 0;
}