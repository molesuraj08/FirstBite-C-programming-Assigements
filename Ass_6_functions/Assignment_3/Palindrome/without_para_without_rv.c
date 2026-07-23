#include <stdio.h>

void table()
{
    int n, i;

    printf("Enter Number : ");
    scanf("%d", &n);
#include <stdio.h>

void palindrome()
{
    int n, temp, rem, rev = 0;

    printf("Enter Number : ");
    scanf("%d", &n);

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
    palindrome();

    return 0;
}
    printf("\nTable of %d\n", n);

    for(i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", n, i, n * i);
    }
}

int main()
{
    table();
    return 0;
}