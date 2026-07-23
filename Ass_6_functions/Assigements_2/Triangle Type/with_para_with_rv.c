#include <stdio.h>

int triangleType(int a, int b, int c)
{
    if(a == b && b == c)
        return 1;
    else if(a == b || b == c || a == c)
        return 2;
    else
        return 3;
}

int main()
{
    int a, b, c, result;

    printf("Enter Three Sides : ");
    scanf("%d%d%d", &a, &b, &c);

    result = triangleType(a, b, c);

    if(result == 1)
        printf("Equilateral Triangle");
    else if(result == 2)
        printf("Isosceles Triangle");
    else
        printf("Scalene Triangle");

    return 0;
}