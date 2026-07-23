#include <stdio.h>

void perfectRange(int start, int end)
{
    int i, j, sum;

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
    int start, end;

    printf("Enter Start and End : ");
    scanf("%d%d", &start, &end);

    perfectRange(start, end);

    return 0;
}