#include <stdio.h>

void primeRange(int start, int end)
{
    int i, j, flag;

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
    int start, end;

    printf("Enter Start and End : ");
    scanf("%d%d", &start, &end);

    primeRange(start, end);

    return 0;
}