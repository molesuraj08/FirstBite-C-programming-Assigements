#include <stdio.h>

void studentResult()
{
    int marks;

    printf("Enter Marks : ");
    scanf("%d", &marks);

    if(marks >= 75)
        printf("Distinction");
    else if(marks >= 60)
        printf("First Class");
    else if(marks >= 50)
        printf("Second Class");
    else if(marks >= 35)
        printf("Pass Class");
    else
        printf("Fail");
}

int main()
{
    studentResult();
    return 0;
}