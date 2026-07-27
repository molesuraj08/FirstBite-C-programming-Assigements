#include <stdio.h>

void sumRange()
{
    int start, end, i, sum = 0;

    printf("Enter Starting Number : ");
    scanf("%d", &start);

    printf("Enter Ending Number : ");
    scanf("%d", &end);

    for(i = start; i <= end; i++)
    {
        sum = sum + i;
    }

    printf("Sum = %d", sum);
}

int main()
{
    sumRange();

    return 0;
}