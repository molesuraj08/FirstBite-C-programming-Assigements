#include <stdio.h>

void evenOdd()
{
    int n;
    printf("Enter Number : ");
    scanf("%d",&n);

    if(n%2==0)
        printf("Even Number");
    else
        printf("Odd Number");
}

int main()
{
    evenOdd();
    return 0;
}