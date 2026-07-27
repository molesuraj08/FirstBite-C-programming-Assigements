#include <stdio.h>

int printNumbers(int n)
{
    int i;

    for(i = 1; i <= n; i++)
    {
        printf("%d ", i);
    }

    return 0;
}

int main()
{
    printNumbers(10);

    return 0;
}