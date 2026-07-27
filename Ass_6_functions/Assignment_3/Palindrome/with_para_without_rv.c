#include <stdio.h>

void palindrome(int n)
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
        printf("Palindrome Number");
    else
        printf("Not a Palindrome Number");
}

int main()
{
    int n;

    printf("Enter Number : ");
    scanf("%d", &n);

    palindrome(n);

    return 0;
}