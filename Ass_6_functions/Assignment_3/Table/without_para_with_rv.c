#include <stdio.h>

int table()
{
    int n, i;

    printf("Enter Number : ");
    scanf("%d", &n);

    printf("\nTable of %d\n", n);

    for(i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    return 0;
}

int main()
{
    table();

    return 0;
}