#include <stdio.h>

int evenOdd()
{
    int n;

    printf("Enter Number : ");
    scanf("%d",&n);

    return n%2;
}

int main()
{
    if(evenOdd()==0)
        printf("Even Number");
    else
        printf("Odd Number");

    return 0;
}