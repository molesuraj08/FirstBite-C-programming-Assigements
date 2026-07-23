#include <stdio.h>

int leapYear()
{
    int year;

    printf("Enter Year : ");
    scanf("%d", &year);

    if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        return 1;
    else
        return 0;
}

int main()
{
    if(leapYear())
        printf("Leap Year");
    else
        printf("Not a Leap Year");

    return 0;
}