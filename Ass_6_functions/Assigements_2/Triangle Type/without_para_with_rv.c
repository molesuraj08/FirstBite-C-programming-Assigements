#include <stdio.h>

int triangleType()
{
    int a, b, c;

    printf("Enter Three Sides : ");
    scanf("%d%d%d", &a, &b, &c);

    if(a == b && b == c)
        return 1;
    else if(a == b || b == c || a == c)
        return 2;
    else
        return 3;
}

int main()
{
    int result = triangleType();

    if(result == 1)
        printf("Equilateral Triangle");
    else if(result == 2)
        printf("Isosceles Triangle");
    else
        printf("Scalene Triangle");

    return 0;
}