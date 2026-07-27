#include <stdio.h>

int palindrome(int n)
{
    int temp, rem, rev = 0;

    temp = n;

    while(n != 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }

    if(temp == rev)
        return 1;
    else
        return 0;
}

int main()
{
    int n;

    printf("Enter Number : ");
    scanf("%d", &n);

    if(palindrome(n))
        printf("Palindrome Number");
    else
        printf("Not a Palindrome Number");

    return 0;
}