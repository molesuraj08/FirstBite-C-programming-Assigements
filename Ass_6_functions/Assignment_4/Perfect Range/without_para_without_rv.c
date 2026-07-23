#include <stdio.h>

void perfectRange()
{
    int start, end, i, j, sum;

    printf("Enter Start and End : ");
    scanf("%d%d", &start, &end);

    printf("Perfect Numbers are:\n");

    for(i = start; i <= end; i++)
    {
        sum = 0;

        for(j = 1; j < i; j++)
        {
            if(i % j == 0)
            {
                sum = sum + j;
            }
        }

        if(sum == i && i != 0)
        {
            printf("%d ", i);
        }
    }
}

int main()
{
    perfectRange();

    return 0;
}