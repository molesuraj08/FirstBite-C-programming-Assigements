#include <stdio.h>

void printNumbers(int n)
{
    int i;

    for(i = 1; i <= n; i++)
    {
        printf("%d ", i);
    }
}

int main()
{
    printNumbers(10);

    return 0;
}