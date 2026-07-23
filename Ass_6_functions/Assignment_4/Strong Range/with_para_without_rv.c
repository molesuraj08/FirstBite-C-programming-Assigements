#include <stdio.h>

void strongRange(int start, int end)
{
    int i, n, temp, rem, fact, sum, j;

    printf("Strong Numbers are:\n");

    for(i = start; i <= end; i++)
    {
        n = i;
        temp = n;
        sum = 0;

        while(n != 0)
        {
            rem = n % 10;
            fact = 1;

            for(j = 1; j <= rem; j++)
            {
                fact = fact * j;
            }

            sum = sum + fact;
            n = n / 10;
        }

        if(sum == temp)
        {
            printf("%d ", temp);
        }
    }
}

int main()
{
    int start, end;

    printf("Enter Start and End : ");
    scanf("%d%d", &start, &end);

    strongRange(start, end);

    return 0;
}