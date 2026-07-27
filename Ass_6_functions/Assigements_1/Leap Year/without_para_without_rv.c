#include <stdio.h>

void leapYear()
{
    int year;

    printf("Enter Year : ");
    scanf("%d", &year);

    if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        printf("Leap Year");
    else
        printf("Not a Leap Year");
}

int main()
{
    leapYear();
    return 0;
}