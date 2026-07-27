#include <stdio.h>

void primeRange()
{
    int start, end, i, j, flag;

    printf("Enter Start and End : ");
    scanf("%d%d", &start, &end);

    printf("Prime Numbers are:\n");

    for(i = start; i <= end; i++)
    {
        if(i <= 1)
            continue;

        flag = 1;

        for(j = 2; j <= i / 2; j++)
        {
            if(i % j == 0)
            {
                flag = 0;
                break;
            }
        }

        if(flag)
            printf("%d ", i);
    }
}

int main()
{
    primeRange();

    return 0;
}