#include <stdio.h>

void sumRange(int start, int end)
{
    int i, sum = 0;

    for(i = start; i <= end; i++)
    {
        sum = sum + i;
    }

    printf("Sum = %d", sum);
}

int main()
{
    int start, end;

    printf("Enter Starting Number : ");
    scanf("%d", &start);

    printf("Enter Ending Number : ");
    scanf("%d", &end);

    sumRange(start, end);

    return 0;
}