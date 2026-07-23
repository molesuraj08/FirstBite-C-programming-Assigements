#include <stdio.h>

int leapYear(int year)
{
    if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        return 1;
    else
        return 0;
}

int main()
{
    int year;

    printf("Enter Year : ");
    scanf("%d", &year);

    if(leapYear(year))
        printf("Leap Year");
    else
        printf("Not a Leap Year");

    return 0;
}