#include <stdio.h>

void greatest()
{
    int a, b, c;

    printf("Enter Three Numbers : ");
    scanf("%d%d%d", &a, &b, &c);

    if(a >= b && a >= c)
        printf("%d is Greatest", a);
    else if(b >= a && b >= c)
        printf("%d is Greatest", b);
    else
        printf("%d is Greatest", c);
}

int main()
{
    greatest();
    return 0;
}