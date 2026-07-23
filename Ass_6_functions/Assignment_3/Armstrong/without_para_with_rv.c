#include <stdio.h>

int armstrong()
{
    int n, temp, rem, sum = 0;

    printf("Enter Number : ");
    scanf("%d", &n);

    temp = n;

    while(n != 0)
    {
        rem = n % 10;
        sum = sum + (rem * rem * rem);
        n = n / 10;
    }

    if(temp == sum)
        return 1;
    else
        return 0;
}

int main()
{
    if(armstrong())
        printf("Armstrong Number");
    else
        printf("Not an Armstrong Number");

    return 0;
}