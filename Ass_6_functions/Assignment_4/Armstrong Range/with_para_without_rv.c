#include <stdio.h>

void armstrongRange(int start, int end)
{
    int i, n, temp, rem, sum;

    printf("Armstrong Numbers are:\n");

    for(i = start; i <= end; i++)
    {
        n = i;
        temp = n;
        sum = 0;

        while(n != 0)
        {
            rem = n % 10;
            sum = sum + rem * rem * rem;
            n = n / 10;
        }

        if(sum == temp)
            printf("%d ", temp);
    }
}

int main()
{
    int start, end;

    printf("Enter Start and End : ");
    scanf("%d%d", &start, &end);

    armstrongRange(start, end);

    return 0;
}