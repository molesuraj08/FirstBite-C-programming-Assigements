#include <stdio.h>

int table(int n)
{
    int i;

    printf("\nTable of %d\n", n);

    for(i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    return 0;
}

int main()
{
    int n;

    printf("Enter Number : ");
    scanf("%d", &n);

    table(n);

    return 0;
}